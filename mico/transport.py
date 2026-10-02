"""SCSI passthrough transport for the JieLi (BR23) USB bootloader.

On Windows the tool talks to `\\\\.\\PHYSICALDRIVEn` handles via
IOCTL_SCSI_PASS_THROUGH_DIRECT; on Linux to /dev/sgN devices via the SG_IO
ioctl. Both paths use the exact same 16-byte CDB layout as the reference
tool (kagaimiq/jl-uboot-tool, MIT).

The bootloader (UBOOT1.00) and the RAM-resident loader (V2 protocol) are both
spoken to with vendor-specific SCSI commands where:

  * bytes 0-1 of the CDB hold a big-endian command word,
  * the remainder holds the command arguments (padded with 0xFF),
  * small replies are read back as a 16-byte "CSW-like" buffer whose first
    two bytes must echo the command word.
"""

from __future__ import annotations

import ctypes
import os
import sys
import time

__all__ = ["SCSIError", "SCSIDev", "SCSI_TIMEOUT_S"]

SCSI_TIMEOUT_S = 10.0


class SCSIError(OSError):
    """Raised when a SCSI passthrough command fails."""


class SCSIDev:
    """Platform-independent wrapper around a SCSI generic device."""

    def __init__(self, path: str) -> None:
        self.path = path
        self._dev = None
        if sys.platform == "win32":
            self._dev = _Win32SCSIDev(path)
        elif sys.platform.startswith("linux"):
            self._dev = _LinuxSCSIDev(path)
        else:
            raise NotImplementedError("unsupported platform: %s" % sys.platform)

    def close(self) -> None:
        if self._dev is not None:
            self._dev.close()
            self._dev = None

    def __enter__(self) -> "SCSIDev":
        return self

    def __exit__(self, *exc) -> None:
        self.close()

    def execute(self, cdb: bytes, data_out: bytes | None = None,
                data_in: bytearray | None = None) -> tuple[int, bytes]:
        if (data_out is None) == (data_in is None):
            raise ValueError("exactly one of data_out/data_in must be set")
        return self._dev.execute(cdb, data_out, data_in)


# --------------------------------------------------------------------------
# Windows implementation
# --------------------------------------------------------------------------

if sys.platform == "win32":
    from ctypes import wintypes

    class _SCSI_PASS_THROUGH_DIRECT(ctypes.Structure):
        _fields_ = [
            ("length", wintypes.USHORT),
            ("scsi_status", ctypes.c_ubyte),
            ("path_id", ctypes.c_ubyte),
            ("target_id", ctypes.c_ubyte),
            ("lun", ctypes.c_ubyte),
            ("cdb_length", ctypes.c_ubyte),
            ("sense_length", ctypes.c_ubyte),
            ("data_in", ctypes.c_ubyte),
            ("data_transfer_length", ctypes.c_ulong),
            ("timeout", ctypes.c_ulong),
            ("data_buffer", ctypes.c_void_p),
            ("sense_info_offset", ctypes.c_ulong),
            ("cdb", ctypes.c_ubyte * 16),
        ]

    _IOCTL_SCSI_PASS_THROUGH_DIRECT = 0x4D014
    _SCSI_IOCTL_DATA_OUT = 0
    _SCSI_IOCTL_DATA_IN = 1
    _SCSI_IOCTL_DATA_UNSPECIFIED = 2

    _kernel32 = ctypes.WinDLL("kernel32", use_last_error=True)
    _kernel32.CreateFileW.restype = wintypes.HANDLE
    _kernel32.CreateFileW.argtypes = [
        wintypes.LPCWSTR, wintypes.DWORD, wintypes.DWORD, ctypes.c_void_p,
        wintypes.DWORD, wintypes.DWORD, wintypes.HANDLE,
    ]
    _kernel32.CloseHandle.argtypes = [wintypes.HANDLE]
    _kernel32.DeviceIoControl.argtypes = [
        wintypes.HANDLE, wintypes.DWORD, ctypes.c_void_p, wintypes.DWORD,
        ctypes.c_void_p, wintypes.DWORD, ctypes.POINTER(wintypes.DWORD),
        ctypes.c_void_p,
    ]
    _kernel32.DeviceIoControl.restype = wintypes.BOOL

    _INVALID_HANDLE_VALUE = wintypes.HANDLE(-1).value
    _GENERIC_READ = 0x80000000
    _GENERIC_WRITE = 0x40000000
    _FILE_SHARE_READ = 1
    _FILE_SHARE_WRITE = 2
    _OPEN_EXISTING = 3

    class _Win32SCSIDev:
        def __init__(self, path: str) -> None:
            self.fhandle = _kernel32.CreateFileW(
                path, _GENERIC_READ | _GENERIC_WRITE,
                _FILE_SHARE_READ | _FILE_SHARE_WRITE, None, _OPEN_EXISTING, 0, None,
            )
            if self.fhandle == _INVALID_HANDLE_VALUE or not self.fhandle:
                err = ctypes.get_last_error()
                raise OSError(err, "CreateFileW(%s) failed: %s" % (path, ctypes.FormatError(err)))

        def close(self) -> None:
            if self.fhandle:
                _kernel32.CloseHandle(self.fhandle)
                self.fhandle = None

        def execute(self, cdb: bytes, data_out: bytes | None,
                    data_in: bytearray | None) -> tuple[int, bytes]:
            sptd = _SCSI_PASS_THROUGH_DIRECT()
            sptd.length = ctypes.sizeof(sptd)
            sptd.path_id = 0
            sptd.target_id = 1
            sptd.lun = 0
            sptd.timeout = int(SCSI_TIMEOUT_S)
            sptd.cdb_length = len(cdb)
            for i, b in enumerate(cdb):
                sptd.cdb[i] = b

            keepalive = None
            if data_out is not None:
                sptd.data_in = _SCSI_IOCTL_DATA_OUT
                sptd.data_transfer_length = len(data_out)
                keepalive = ctypes.create_string_buffer(bytes(data_out), len(data_out))
                sptd.data_buffer = ctypes.cast(keepalive, ctypes.c_void_p)
            else:
                sptd.data_in = _SCSI_IOCTL_DATA_IN
                sptd.data_transfer_length = len(data_in)
                keepalive = ctypes.create_string_buffer(len(data_in))
                sptd.data_buffer = ctypes.cast(keepalive, ctypes.c_void_p)

            requested = sptd.data_transfer_length
            returned = wintypes.DWORD(0)
            ok = _kernel32.DeviceIoControl(
                self.fhandle, _IOCTL_SCSI_PASS_THROUGH_DIRECT,
                ctypes.byref(sptd), sptd.length,
                ctypes.byref(sptd), sptd.length,
                ctypes.byref(returned), None,
            )
            if not ok:
                err = ctypes.get_last_error()
                raise SCSIError(err, "SCSI passthrough failed: %s" % ctypes.FormatError(err))

            transferred = sptd.data_transfer_length
            if data_in is not None:
                data_in[:transferred] = keepalive.raw[:transferred]
            return requested - transferred, b""

# --------------------------------------------------------------------------
# Linux implementation (SG_IO ioctl)
# --------------------------------------------------------------------------

if sys.platform.startswith("linux"):
    import fcntl

    class _sg_io_hdr(ctypes.Structure):
        _fields_ = [
            ("interface_id", ctypes.c_int),
            ("dxfer_direction", ctypes.c_int),
            ("cmd_len", ctypes.c_ubyte),
            ("mx_sb_len", ctypes.c_ubyte),
            ("iovec_count", ctypes.c_short),
            ("dxfer_len", ctypes.c_uint),
            ("dxferp", ctypes.POINTER(ctypes.c_ubyte)),
            ("cmdp", ctypes.POINTER(ctypes.c_ubyte)),
            ("sbp", ctypes.POINTER(ctypes.c_ubyte)),
            ("timeout", ctypes.c_uint),
            ("flags", ctypes.c_uint),
            ("pack_id", ctypes.c_int),
            ("usr_ptr", ctypes.c_void_p),
            ("status", ctypes.c_ubyte),
            ("masked_status", ctypes.c_ubyte),
            ("msg_status", ctypes.c_ubyte),
            ("sb_len_wr", ctypes.c_ubyte),
            ("host_status", ctypes.c_ushort),
            ("driver_status", ctypes.c_ushort),
            ("resid", ctypes.c_int),
            ("duration", ctypes.c_uint),
            ("info", ctypes.c_uint),
        ]

    _SG_IO = 0x2285
    _SG_INTERFACE_ID_ORIG = ord("S")
    _SG_DXFER_NONE = -1
    _SG_DXFER_TO_DEV = -2
    _SG_DXFER_FROM_DEV = -3
    _SG_INFO_OK = 0x0
    _SG_INFO_OK_MASK = 0x1

    class _LinuxSCSIDev:
        def __init__(self, path: str) -> None:
            self.fd = os.open(path, os.O_RDWR)

        def close(self) -> None:
            if self.fd is not None:
                os.close(self.fd)
                self.fd = None

        def execute(self, cdb: bytes, data_out: bytes | None,
                    data_in: bytearray | None) -> tuple[int, bytes]:
            sgio = _sg_io_hdr()
            sgio.interface_id = _SG_INTERFACE_ID_ORIG
            sgio.timeout = int(SCSI_TIMEOUT_S * 1000)

            max_sense = 32
            sense = ctypes.create_string_buffer(max_sense)
            sgio.mx_sb_len = max_sense
            sgio.sbp = ctypes.cast(sense, ctypes.POINTER(ctypes.c_ubyte))

            sgio.cmd_len = len(cdb)
            sgio.cmdp = ctypes.cast(
                ctypes.create_string_buffer(bytes(cdb), len(cdb)),
                ctypes.POINTER(ctypes.c_ubyte),
            )

            if data_out is not None:
                sgio.dxfer_direction = _SG_DXFER_TO_DEV
                sgio.dxfer_len = len(data_out)
                buf = ctypes.create_string_buffer(bytes(data_out), len(data_out))
                sgio.dxferp = ctypes.cast(buf, ctypes.POINTER(ctypes.c_ubyte))
            else:
                sgio.dxfer_direction = _SG_DXFER_FROM_DEV
                sgio.dxfer_len = len(data_in)
                buf = ctypes.create_string_buffer(len(data_in))
                sgio.dxferp = ctypes.cast(buf, ctypes.POINTER(ctypes.c_ubyte))

            try:
                fcntl.ioctl(self.fd, _SG_IO, sgio)
            except OSError as exc:
                raise SCSIError(exc.errno, str(exc)) from exc

            if (sgio.info & _SG_INFO_OK_MASK) != _SG_INFO_OK:
                msg = "SCSI transfer failed: info:%02x host:%02x driver:%02x" % (
                    sgio.info, sgio.host_status, sgio.driver_status)
                if sgio.sb_len_wr > 0:
                    msg += " sense:" + bytes(sense.raw[: sgio.sb_len_wr]).hex()
                raise SCSIError(0, msg)

            if data_in is not None:
                data_in[: sgio.dxfer_len] = bytearray(buf.raw[: sgio.dxfer_len])
            return sgio.resid, sense.raw[: sgio.sb_len_wr]