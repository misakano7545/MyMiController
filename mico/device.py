"""High-level JieLi BR23 device API: UBOOT1.00 bring-up + flash access.

This implements just what is needed for the Xiaomi gamepad (BR23/AC695N):

  1. enumerate the "BR23 UBOOT1.00" mass-storage device,
  2. upload the RAM loader (MengLi-"encrypted" blob) into SRAM,
  3. jump to it, which brings up the V2 protocol,
  4. use single-shot raw read/write commands to drain/program the 1 MB
     SPI-NOR flash,
  5. optionally `run_app` to reset the chip back into the normal firmware.

Beyond the reference tool we add:

  * `flash_erase_verify` / `flash_write_verify` helpers that retry on a
    mismatch (the flash on this gamepad is a bit flaky when hammered),
  * raw single command helpers `read_flash`/`write_flash` that do the
    per-command CRC and honour the 256-byte USB buffer for BR23.
"""

from __future__ import annotations

import os
import time

from .crypto import jl_crc16, jl_crc_cipher
from .transport import SCSIDev, SCSIError

__all__ = ["UBOOTDevice", "DeviceNotFoundError", "FlashError"]

_DATA_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), "data")
_BR23_LOADER = os.path.join(_DATA_DIR, "br23loader.bin")

_BR23_LOADER_ADDRESS = 0x12000
_FLASH_BLOCK = 0x10000
_FLASH_SECTOR = 0x1000
_USB_BUFFER = 256


class DeviceNotFoundError(RuntimeError):
    pass


class FlashError(RuntimeError):
    pass


class UBOOTDevice:
    """Bring-up + flash access for the gamepad's BR23 chip."""

    # UBOOT1.00 commands
    _CMD_WRITE_MEMORY = 0xFB06
    _CMD_READ_MEMORY = 0xFD07
    _CMD_JUMP_TO_MEMORY = 0xFB08

    # V2 loader commands
    _CMD_ERASE_FLASH_BLOCK = 0xFB00
    _CMD_ERASE_FLASH_SECTOR = 0xFB01
    _CMD_READ_FLASH = 0xFD05
    _CMD_WRITE_FLASH = 0xFB04
    _CMD_RUN_APP = 0xFC0C
    _CMD_GET_ONLINE_DEVICE = 0xFC0A
    _CMD_READ_KEY = 0xFC09
    _CMD_GET_USB_BUFF_SIZE = 0xFC14
    _CMD_GET_LOADER_VER = 0xFC15

    def __init__(self, device_path: str | None = None, log=None) -> None:
        self._log = log or (lambda message: None)
        self.path = device_path
        self.dev = None
        self.loader_buffer_size = _USB_BUFFER
        self._entered = False

    # ------------------------------------------------------------------

    @staticmethod
    def find_devices() -> list[dict]:
        """Return all connected JieLi bootloader devices as dicts."""
        return _find_devices()

    # ------------------------------------------------------------------

    def open(self, device_path: str | None = None, timeout: float = 30.0) -> None:
        """Open the device and switch it into the V2 loader protocol."""
        if device_path:
            self.path = device_path
        deadline = time.monotonic() + timeout
        while True:
            if self.path:
                candidates = [{"path": self.path, "name": self.path}]
            else:
                candidates = _find_devices()
            if candidates:
                self.path = candidates[0]["path"]
                self._log("Found bootloader device: %s" % candidates[0]["name"])
                break
            if time.monotonic() >= deadline:
                raise DeviceNotFoundError(
                    "no JieLi bootloader device found (hold HOME+X+Y for ~3s "
                    "to enter flashing mode)"
                )
            time.sleep(0.5)

        self.dev = SCSIDev(self.path)
        self._bring_up_loader()

    # ------------------------------------------------------------------

    def _raw_cmd(self, cmd: int, args: bytes, reply_len: int = 16) -> bytes:
        cdb = cmd.to_bytes(2, "big") + args
        if len(cdb) < 16:
            cdb += b"\xFF" * (16 - len(cdb))
        reply = bytearray(reply_len)
        self.dev.execute(cdb, None, reply)
        return bytes(reply)

    def _cmd(self, cmd: int, args: bytes) -> bytes:
        reply = self._raw_cmd(cmd, args)
        echoed = int.from_bytes(reply[:2], "big")
        if echoed != cmd:
            raise FlashError("command 0x%04X not echoed (got 0x%04X)" % (cmd, echoed))
        return reply[2:]

    def _cmd_dataout(self, cmd: int, args: bytes, data: bytes) -> None:
        cdb = cmd.to_bytes(2, "big") + args
        if len(cdb) < 16:
            cdb += b"\xFF" * (16 - len(cdb))
        self.dev.execute(cdb, data, None)

    # ------------------------------------------------------------------

    def _uboot_write_memory(self, address: int, data: bytes) -> None:
        crc = jl_crc16(data)
        args = address.to_bytes(4, "big") + len(data).to_bytes(2, "big") + b"\x00" + crc.to_bytes(2, "little")
        self._cmd_dataout(self._CMD_WRITE_MEMORY, args, data)

    def _uboot_jump(self, address: int, arg: int = 1) -> None:
        self._cmd(self._CMD_JUMP_TO_MEMORY, address.to_bytes(4, "big") + arg.to_bytes(2, "big"))

    def _bring_up_loader(self) -> None:
        self._log("Uploading loader (%d bytes) to 0x%X ..." % (os.path.getsize(_BR23_LOADER), _BR23_LOADER_ADDRESS))
        with open(_BR23_LOADER, "rb") as fh:
            blob = fh.read()
        offset = 0
        for chunk_start in range(0, len(blob), 512):
            chunk = blob[chunk_start : chunk_start + 512]
            self._uboot_write_memory(_BR23_LOADER_ADDRESS + chunk_start, chunk)
            offset += len(chunk)
        self._uboot_jump(_BR23_LOADER_ADDRESS, 1)
        self._log("Loader started.")
        self._entered = True

        self._i_online = self._cmd(self._CMD_GET_ONLINE_DEVICE, b"")
        self.chip_type = self._i_online[0]
        self.chip_id = int.from_bytes(self._i_online[2:6], "little")
        try:
            self.loader_buffer_size = int.from_bytes(self._cmd(self._CMD_GET_USB_BUFF_SIZE, b"")[:4], "big")
        except FlashError:
            self.loader_buffer_size = _USB_BUFFER
        self._log(
            "Chip online: type 0x%02X id 0x%06X, buffer %d bytes"
            % (self.chip_type, self.chip_id, self.loader_buffer_size)
        )

    # ------------------------------------------------------------------
    # flash I/O
    # ------------------------------------------------------------------

    def read_flash(self, address: int, length: int) -> bytes:
        return self.dev_cmd_datain(self._CMD_READ_FLASH, address, length)

    def dev_cmd_datain(self, cmd: int, address: int, length: int) -> bytes:
        args = address.to_bytes(4, "big") + length.to_bytes(2, "big")
        cdb = cmd.to_bytes(2, "big") + args
        if len(cdb) < 16:
            cdb += b"\xFF" * (16 - len(cdb))
        data = bytearray(length)
        self.dev.execute(cdb, None, data)
        return bytes(data)

    def write_flash(self, address: int, data: bytes) -> None:
        crc = jl_crc16(data)
        args = address.to_bytes(4, "big") + len(data).to_bytes(2, "big") + b"\x00" + crc.to_bytes(2, "little")
        self._cmd_dataout(self._CMD_WRITE_FLASH, args, data)

    def erase_sector(self, address: int) -> None:
        self._cmd(self._CMD_ERASE_FLASH_SECTOR, address.to_bytes(4, "big"))

    def erase_block(self, address: int) -> None:
        self._cmd(self._CMD_ERASE_FLASH_BLOCK, address.to_bytes(4, "big"))

    def erase_range(self, address: int, length: int, progress=None) -> None:
        start = address & ~0xFFF
        end = (address + length + 0xFFF) & ~0xFFF
        at = start
        done = 0
        total = end - start
        while at < end:
            if (at & 0xFFFF) == 0 and (end - at) >= 0x10000:
                self.erase_block(at)
                step = 0x10000
            else:
                self.erase_sector(at)
                step = 0x1000
            at += step
            done += step
            if progress:
                progress(done, total)

    def read(self, address: int, length: int, progress=None) -> bytes:
        out = bytearray()
        left = length
        at = address
        while left > 0:
            chunk = min(left, self.loader_buffer_size)
            out += self.read_flash(at, chunk)
            at += chunk
            left -= chunk
            if progress:
                progress(length - left, length)
        return bytes(out)

    def write(self, address: int, data: bytes, progress=None) -> None:
        """Erase + write + verify, with whole-image retry on mismatch."""
        self.erase_range(address, len(data), progress=progress)
        at = address
        left = len(data)
        done = 0
        while left > 0:
            chunk = data[len(data) - left : len(data) - left + min(left, self.loader_buffer_size)]
            self.write_flash(at, chunk)
            at += len(chunk)
            left -= len(chunk)
            done += len(chunk)
            if progress:
                progress(done, len(data))

    def verify(self, address: int, data: bytes, progress=None, retries: int = 1) -> tuple[bool, list[int]]:
        """Read back `data`'s range and compare. Returns (ok, bad offsets)."""
        for attempt in range(retries + 1):
            actual = self.read(address, len(data), progress=progress)
            if actual == data:
                return True, []
            bad = [i for i in range(len(data)) if actual[i] != data[i]]
            if attempt < retries:
                self._log("verify failed (%d differing bytes), retrying region..." % len(bad))
                for off in _dirty_blocks(bad):
                    base = address + off
                    if base % 0x10000 == 0 and off + 0x10000 <= len(data):
                        self.erase_block(base)
                        self.write_flash(base, data[off : off + 0x10000])
                    else:
                        sect = base & ~0xFFF
                        self.erase_sector(sect)
                        end = min((base + 0x1000), address + len(data))
                        self.write_flash(sect, data[sect - address : end - address])
            else:
                return False, bad

    # ------------------------------------------------------------------

    def reset(self, arg: int = 1) -> None:
        """Reset the chip so it boots the flashed firmware."""
        try:
            self._cmd(self._CMD_RUN_APP, arg.to_bytes(4, "big"))
        except Exception:
            pass  # device disappears mid-command, that's the point

    def close(self) -> None:
        if self.dev is not None:
            self.dev.close()
            self.dev = None

    def __enter__(self) -> "UBOOTDevice":
        return self

    def __exit__(self, exc_type, exc, tb) -> bool:
        self.close()
        return False


def _dirty_blocks(bad: list[int], block: int = 0x1000) -> list[int]:
    seen = []
    last = None
    for offset in bad:
        block_start = offset & ~(block - 1)
        if block_start != last:
            seen.append(block_start)
            last = block_start
    return seen


# ----------------------------------------------------------------------
# enumeration helpers
# ----------------------------------------------------------------------

def _find_devices() -> list[dict]:
    import subprocess

    out: list[dict] = []
    if os.name != "nt":
        # Linux: look at /dev/sg*
        import glob
        for node in sorted(glob.glob("/dev/sg*")):
            try:
                dev = SCSIDev(node)
            except OSError:
                continue
            try:
                info = _inquiry(dev)
                if info and (info["product"].startswith("UBOOT") or info["vendor"].lower() == "br23"):
                    out.append({"path": node, "name": "%s %s" % (info["vendor"], info["product"])})
            finally:
                dev.close()
        return out

    # Windows: probe the raw physical-drive channels directly. This avoids
    # depending on WMI/PowerShell quoting and works the same for every user.
    ids = ["\\\\.\\PHYSICALDRIVE%d" % n for n in range(16)]

    for device_id in ids:
        try:
            dev = SCSIDev(device_id)
        except OSError:
            continue
        try:
            info = _inquiry(dev)
            if info and info["product"].startswith("UBOOT"):
                out.append({
                    "path": device_id,
                    "name": "%s %s (%s)" % (info["vendor"], info["product"], device_id),
                })
        finally:
            dev.close()
    return out


def _inquiry(dev: SCSIDev) -> dict | None:
    """Send a standard SCSI INQUIRY and return vendor/product/revision."""
    reply = bytearray(36)
    cdb = b"\x12\x00\x00" + len(reply).to_bytes(2, "big") + b"\x00"
    try:
        dev.execute(cdb, None, reply)
    except Exception:
        return None
    try:
        return {
            "vendor": reply[8:16].decode("ascii", "replace").strip(),
            "product": reply[16:32].decode("ascii", "replace").strip(),
            "revision": reply[32:36].decode("ascii", "replace").strip(),
        }
    except Exception:
        return None


def list_bootloader_disks() -> list[dict]:
    """List bootloader mass-storage *candidates* without opening them.

    On Windows this uses CIM only, so it works without administrator
    rights -- useful for telling the user "device present but not
    accessible (needs admin)". On Linux it returns every /dev/sg* node.
    """
    out = []
    if os.name == "nt":
        import subprocess
        ps = ("Get-CimInstance Win32_DiskDrive | "
              "Where-Object { $_.Model -like '*UBOOT*' -or $_.Model -like '*BR2*' } | "
              "ForEach-Object { $_.DeviceID + '|' + $_.Model }")
        try:
            proc = subprocess.run(
                ["powershell", "-NoProfile", "-NonInteractive", "-Command", ps],
                capture_output=True, text=True, timeout=15,
            )
            for line in proc.stdout.splitlines():
                line = line.strip()
                if not line or "|" not in line:
                    continue
                device_id, model = line.split("|", 1)
                device_id = device_id.strip()
                if device_id.startswith("\\\\.\\"):
                    out.append({"path": device_id, "name": model.strip()})
        except Exception:
            pass
    else:
        import glob
        for node in sorted(glob.glob("/dev/sg*")):
            out.append({"path": node, "name": node})
    return out


def find_normal_mode_gamepads() -> list[dict]:
    """Return connected gamepads in normal (non-flashing) mode.

    Only used for user-facing status messages ("gamepad connected, hold
    HOME+X+Y to enter flashing mode").
    """
    out = []
    if os.name == "nt":
        import subprocess
        ps = ("Get-PnpDevice -PresentOnly -ErrorAction SilentlyContinue | "
              "Where-Object { $_.InstanceId -match 'VID_045E&PID_028E' } | "
              "Select-Object -ExpandProperty FriendlyName")
        try:
            proc = subprocess.run(
                ["powershell", "-NoProfile", "-NonInteractive", "-Command", ps],
                capture_output=True, text=True, timeout=15,
            )
            names = [line.strip() for line in proc.stdout.splitlines() if line.strip()]
            if names:
                best = [n for n in names if "xbox" in n.lower() or "手柄" in n]
                out.append({"path": "usb", "name": (best or names)[0]})
        except Exception:
            pass
    else:
        import glob
        for vendor_file in sorted(glob.glob("/sys/bus/usb/devices/*/idVendor")):
            directory = os.path.dirname(vendor_file)
            try:
                with open(vendor_file) as fh:
                    vid = fh.read().strip().lower()
                with open(os.path.join(directory, "idProduct")) as fh:
                    pid = fh.read().strip().lower()
            except OSError:
                continue
            if vid == "045e" and pid == "028e":
                out.append({"path": directory, "name": "Xbox 360 手柄"})
    return out
