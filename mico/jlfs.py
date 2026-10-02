"""JLFS firmware container: parse and rebuild the G5605 flash image.

The gamepad's 1 MiB SPI-NOR flash starts with a 0x53000-byte firmware
image.  That image is a JieLi "new FW" container:

    0x00000  32-byte header (PID string "G5605_V1.0", geometry, ...)
    0x00020  top-level JLFS directory (5 entries x 32 bytes)
    0x000C0  uboot.boot (SPL; 16-byte bank header + ENC-ciphered body)
    0x020A8  isd_config.ini (plaintext)
    0x02119  0xFF pad
    0x03000  one stray 32-byte code block (opaque; copied from template)
    0x03020  app_area_head directory (app.bin / cfg_tool.bin / tone / ...)
    0x030E0  app.bin payload  <- the code Ghidra disassembles
    ...
    0x052BF8 end of the encrypted app area, 0xFF up to 0x53000

This module makes firmware *development* practical:

    image -> JlfImage            -> parts
    parts -> build_flash_image() -> image

Feeding the parts parsed out of the factory image reproduces that image
bit for bit (pinned by a test), which is what lets CI prove a rebuilt
image is good before anyone flashes it.

Cipher rules (all verified against the factory image):

  * Top-level directory entries: "ENC" LFSR (key 0xFFFF) restarted at
    each 32-byte block.
  * uboot.boot: the 16-byte bank header uses a fresh ENC(0xFFFF)
    stream, then the body *continues that same stream* across blocks.
  * Everything in 0x03020..0x052BF8 uses the address-dependent "SFC"
    cipher with
        block_key = (chip_key ^ ((pos - 0x3020) >> 2)) & 0xFFFF
    where the shift is relative to the region start, not file start.
  * A trailing partial block stays 0xFF past its meaningful length.

CRC rules (CRC-16/CCITT-FALSE, init 0):
  * header[0:2] = crc16(header[2:32])
  * entry[0:2]  = crc16(entry[2:32])   (directory entry header)
  * entry[2:4]  = crc16(payload)       (data_crc)
  * app_area_head's data_crc covers its whole sub-tree
    (0x3040 .. end of the tone payload).

Directory/file semantics:
  * A file entry stores its payload at (enclosing_dir_base + offset).
  * A directory entry (flags 0x83) stores payload immediately after its
    own header, and its size spans header + contents.
"""

from __future__ import annotations

import struct

from .crypto import jl_crc16, jl_enc_cipher, jl_sfc_cipher

__all__ = [
    "IMAGE_SIZE",
    "HEADER_LEN",
    "ENTRY_LEN",
    "ENCRYPTED_START",
    "ENCRYPTED_END",
    "CHIP_KEY",
    "UBOOT_OFF",
    "ISD_CONFIG_OFF",
    "APP_AREA_OFF",
    "APP_DIR_OFF",
    "APP_DATA_OFF",
    "TONE_OFF",
    "JlfEntry",
    "JlfImage",
    "build_flash_image",
    "decrypt_image",
    "encrypt_image",
]

IMAGE_SIZE = 0x53000            # firmware region (vendor flash.bin size)
HEADER_LEN = 0x20
ENTRY_LEN = 0x20

UBOOT_OFF = 0x00C0
UBOOT_HDR_LEN = 0x10
UBOOT_BANK_LEN = 0x1FD8
ISD_CONFIG_OFF = 0x020A8
STRAY_OFF = 0x03000
STRAY_END = 0x03020
APP_AREA_OFF = 0x03020
APP_DIR_OFF = 0x03040
APP_DATA_OFF = 0x030E0

TONE_OFF = 0x04A488             # tone entry header (stock geometry)
TONE_DATA_OFF = 0x04A808

ENCRYPTED_START = APP_AREA_OFF  # first SFC-ciphered byte
ENCRYPTED_END = 0x052BF8        # one past the last SFC-ciphered byte

TOP_ENTRY_COUNT = 5
APP_DIR_ENTRY_COUNT = 5

CHIP_KEY = 0xA80F               # BR23 chip key reported by isd_config.ini

# Vendor "template" pieces: not derived from any payload, but the image
# does not boot without them.  Defaults are the G5605 factory values.
STOCK_HEADER = bytes.fromhex(
    "d4c900022f104cc900f00f000210a4ff482b0a48e4dc717fb229ecd9b367cf9f"
)
STOCK_STRAY = bytes.fromhex(
    "834f28aac23e7cf8283aa7673142a468f0e1c3872e7cd8b163e6ecd9b367cf9f"
)
STOCK_ROWS = {
    "key_mac": bytes.fromhex(
        "dd06ffff00f00f00001000001201ffff6b65795f6d616300ffffffffffffffff"),
    "VM": bytes.fromhex(
        "a815ffff00600f000080000012810000564d00ffffffffffffffffff00800000"),
    "PRCT": bytes.fromhex(
        "e783ffff0000000000600f00928200005052435400ffffffffffffff434f4445"),
    "BTIF": bytes.fromhex(
        "3af1ffff00e00f0000100000928101004254494600ffffffffffffff4155544f"),
}

# flags observed in the vendor image
FLAG_SPL = 0x00
FLAG_ISD_CONFIG = 0x02
FLAG_DIR_HEAD = 0x81
FLAG_APP_FILE = 0x82
FLAG_DIR = 0x83
FLAG_RESERVED = 0x12


def _name16(name: str) -> bytes:
    raw = name.encode("latin1")
    if len(raw) >= 16:
        return raw[:16]
    return raw + b"\x00" + b"\xff" * (15 - len(raw))


class JlfEntry:
    """A single 32-byte JLFS directory entry."""

    __slots__ = ("table_off", "data_crc", "offset", "size", "flags",
                 "reserved", "index", "name", "raw_name", "base")

    def __init__(self, table_off, data_crc, offset, size, flags=0,
                 reserved=0xFF, index=0, name="", raw_name=None, base=0):
        self.table_off = table_off
        self.data_crc = data_crc
        self.offset = offset
        self.size = size
        self.flags = flags
        self.reserved = reserved
        self.index = index
        self.name = name
        self.raw_name = raw_name if raw_name is not None else _name16(name)
        self.base = base          # directory this entry lives in

    # -- geometry helpers ---------------------------------------------

    @property
    def is_dir(self) -> bool:
        return self.flags == FLAG_DIR

    @property
    def data_offset(self) -> int:
        if self.is_dir:
            return self.table_off + ENTRY_LEN
        return self.base + self.offset

    @property
    def data_size(self) -> int:
        if self.is_dir:
            return self.table_off + self.size - self.data_offset
        return self.size

    def to_bytes(self) -> bytes:
        header = struct.pack(
            "<HIIBBH16s", self.data_crc, self.offset, self.size,
            self.flags, self.reserved, self.index, self.raw_name)
        return struct.pack("<H30s", jl_crc16(header), header)

    @classmethod
    def from_bytes(cls, raw: bytes, table_off: int, base: int = 0) -> "JlfEntry":
        stored, header = struct.unpack_from("<H30s", raw, table_off)
        if jl_crc16(header) != stored:
            raise ValueError(
                "JLFS entry header CRC mismatch at 0x%X" % table_off)
        data_crc, offset, size, flags, reserved, index, raw_name = \
            struct.unpack("<HIIBBH16s", header)
        return cls(table_off, data_crc, offset, size, flags, reserved,
                   index, raw_name.split(b"\x00")[0].decode("latin1"),
                   raw_name, base)

    def __repr__(self) -> str:
        return "<JlfEntry %-14r @0x%05X -> 0x%05X +%#06x flags=%#04x>" % (
            self.name, self.table_off, self.data_offset, self.data_size,
            self.flags)


def decrypt_image(raw: bytes) -> bytearray:
    """Return the plaintext view of an encrypted firmware image."""
    if len(raw) < IMAGE_SIZE:
        raise ValueError("image too short")
    img = bytearray(raw[:IMAGE_SIZE])
    img[0:HEADER_LEN] = jl_enc_cipher(bytes(img[0:HEADER_LEN]), 0xFFFF)
    for off in range(0x20, UBOOT_OFF, ENTRY_LEN):
        img[off:off + ENTRY_LEN] = jl_enc_cipher(
            bytes(img[off:off + ENTRY_LEN]), 0xFFFF)
    img[UBOOT_OFF:UBOOT_OFF + UBOOT_HDR_LEN] = jl_enc_cipher(
        bytes(img[UBOOT_OFF:UBOOT_OFF + UBOOT_HDR_LEN]), 0xFFFF)
    bank = UBOOT_OFF + UBOOT_HDR_LEN
    img[bank:bank + UBOOT_BANK_LEN] = jl_enc_cipher(
        bytes(img[bank:bank + UBOOT_BANK_LEN]), 0xFFFF)
    img[ENCRYPTED_START:ENCRYPTED_END] = jl_sfc_cipher(
        bytes(img[ENCRYPTED_START:ENCRYPTED_END]), CHIP_KEY, 0)
    return img


def encrypt_image(plain: bytearray | bytes) -> bytes:
    """Return the encrypted, flashable view of a plaintext image."""
    data = bytearray(plain)
    data[0:HEADER_LEN] = jl_enc_cipher(bytes(data[0:HEADER_LEN]), 0xFFFF)
    for off in range(0x20, UBOOT_OFF, ENTRY_LEN):
        data[off:off + ENTRY_LEN] = jl_enc_cipher(
            bytes(data[off:off + ENTRY_LEN]), 0xFFFF)
    data[UBOOT_OFF:UBOOT_OFF + UBOOT_HDR_LEN] = jl_enc_cipher(
        bytes(data[UBOOT_OFF:UBOOT_OFF + UBOOT_HDR_LEN]), 0xFFFF)
    bank = UBOOT_OFF + UBOOT_HDR_LEN
    data[bank:bank + UBOOT_BANK_LEN] = jl_enc_cipher(
        bytes(data[bank:bank + UBOOT_BANK_LEN]), 0xFFFF)
    data[ENCRYPTED_START:ENCRYPTED_END] = jl_sfc_cipher(
        bytes(data[ENCRYPTED_START:ENCRYPTED_END]), CHIP_KEY, 0)
    return bytes(data)


class JlfImage:
    """Parsed view of one firmware image (encrypted or plaintext)."""

    def __init__(self, data: bytes):
        if len(data) < IMAGE_SIZE:
            raise ValueError("image too short: %d (want >= %d)"
                             % (len(data), IMAGE_SIZE))
        self.encrypted = data[:IMAGE_SIZE]
        self.plain = decrypt_image(data)
        self.header = bytes(self.plain[:HEADER_LEN])
        self.top = [JlfEntry.from_bytes(self.plain, 0x20 + 0x20 * i)
                    for i in range(TOP_ENTRY_COUNT)]
        self.app_dir = [JlfEntry.from_bytes(self.plain, APP_DIR_OFF + 0x20 * i,
                                            base=APP_AREA_OFF)
                        for i in range(APP_DIR_ENTRY_COUNT)]
        self.app_area = JlfEntry.from_bytes(self.plain, APP_AREA_OFF,
                                            base=APP_AREA_OFF)
        self.tone = JlfEntry.from_bytes(self.plain, self.app_area_end(),
                                        base=APP_AREA_OFF)

    def app_area_end(self) -> int:
        entry = JlfEntry.from_bytes(self.plain, APP_AREA_OFF)
        return entry.table_off + entry.size

    def find(self, entries, name):
        for entry in entries:
            if entry.name == name:
                return entry
        raise KeyError(name)

    # -- payload accessors --------------------------------------------

    def payload(self, entry: JlfEntry) -> bytes:
        return bytes(self.plain[entry.data_offset:
                                entry.data_offset + entry.data_size])

    @property
    def uboot(self) -> bytes:
        return self.payload(self.find(self.top, "uboot.boot"))

    @property
    def isd_config(self) -> bytes:
        return self.payload(self.find(self.top, "isd_config.ini"))

    @property
    def app_entry(self) -> JlfEntry:
        return self.find(self.app_dir, "app.bin")

    @property
    def app_bin(self) -> bytes:
        return self.payload(self.app_entry)

    @property
    def cfg_tool(self) -> bytes:
        return self.payload(self.find(self.app_dir, "cfg_tool.bin"))

    @property
    def tone_blob(self) -> bytes:
        """The tone directory *including* its own 32-byte entry header."""
        return bytes(self.plain[self.tone.table_off:
                                self.tone.table_off + self.tone.size])

    # -- self-check ----------------------------------------------------

    def verify(self) -> list:
        """Return a list of problems; empty means every CRC passes."""
        problems = []
        header_crc = int.from_bytes(self.header[0:2], "little")
        if jl_crc16(self.header[2:]) != header_crc:
            problems.append("header CRC")
        for entry in self.top + self.app_dir:
            if entry.flags & 0x10 or entry.data_crc == 0xFFFF:
                continue
            if jl_crc16(self.payload(entry)) != entry.data_crc:
                problems.append("data CRC of %s" % entry.name)
        area = self.plain[self.app_area.data_offset:
                          self.app_area.table_off + self.app_area.size]
        if jl_crc16(bytes(area)) != self.app_area.data_crc:
            problems.append("data CRC of app_area_head")
        tone = self.plain[self.tone.data_offset:
                          self.tone.table_off + self.tone.size]
        if jl_crc16(bytes(tone)) != self.tone.data_crc:
            problems.append("data CRC of tone")
        return problems


def extract_parts(image: bytes) -> dict:
    """Return the component blobs of a firmware image as a dict."""
    parsed = JlfImage(image)
    return {
        "uboot": parsed.uboot,
        "isd_config": parsed.isd_config,
        "app_bin": parsed.app_bin,
        "cfg_tool": parsed.cfg_tool,
        "tone": parsed.tone_blob,
    }


def extract_template(image: bytes) -> dict:
    """Return the opaque pieces a rebuild reuses verbatim.

    These are not derived from any payload: the 32-byte image header, the
    stray code block, and the directory rows describing reserved areas
    (key_mac / VM / PRCT / BTIF).  Carrying them over from a known-good
    image keeps their odd vendor-specific padding intact.
    """
    parsed = JlfImage(image)
    rows = {}
    for entry in parsed.top + parsed.app_dir:
        if entry.flags & 0x10 or entry.name == "key_mac":
            rows[entry.name] = bytes(parsed.plain[entry.table_off:
                                                  entry.table_off + ENTRY_LEN])
    return {
        "header": parsed.header,
        "stray": bytes(parsed.plain[STRAY_OFF:STRAY_END]),
        "rows": rows,
    }


def build_flash_image(uboot: bytes, isd_config: bytes, app_bin: bytes,
                      cfg_tool: bytes, tone: bytes, header: bytes = None,
                      stray: bytes = None, rows: dict = None,
                      chip_key: int = CHIP_KEY) -> bytes:
    """Rebuild a flashable 0x53000 image from its parts.

    The stock parts reproduce the factory image byte-for-byte.  Sizes are
    free to change: the tone directory automatically follows app.bin and
    cfg_tool.bin, and every CRC is recomputed.
    """
    if header is None:
        header = STOCK_HEADER
    if len(header) != HEADER_LEN:
        raise ValueError("header must be %d bytes" % HEADER_LEN)
    if stray is None:
        stray = STOCK_STRAY
    if len(stray) != STRAY_END - STRAY_OFF:
        raise ValueError("stray block must be %d bytes" % (STRAY_END - STRAY_OFF))
    plain = bytearray(b"\xff" * IMAGE_SIZE)
    plain[:HEADER_LEN] = header
    plain[STRAY_OFF:STRAY_END] = stray

    # ---- top-level directory ----------------------------------------
    top = [
        JlfEntry(0x20, jl_crc16(uboot), UBOOT_OFF, len(uboot),
                 FLAG_SPL, 0x00, 0, "uboot.boot"),
        JlfEntry(0x40, jl_crc16(isd_config), ISD_CONFIG_OFF,
                 len(isd_config), FLAG_ISD_CONFIG, 0x80, 0,
                 "isd_config.ini"),
        JlfEntry(0x60, 0xFFFF, APP_AREA_OFF, 0x3000, FLAG_DIR_HEAD,
                 0xFF, 0, "app_dir_head"),
        JlfEntry(0x80, 0xFFFF, 0x7C020, 0x7C000, FLAG_DIR_HEAD,
                 0xFF, 0, "app_dir_head2"),
        JlfEntry(0xA0, 0xFFFF, 0xFF000, 0x1000, FLAG_RESERVED,
                 0x01, 0xFFFF, "key_mac"),
    ]
    for entry in top:
        plain[entry.table_off:entry.table_off + ENTRY_LEN] = entry.to_bytes()

    # ---- payloads ----------------------------------------------------
    plain[UBOOT_OFF:UBOOT_OFF + len(uboot)] = uboot
    plain[ISD_CONFIG_OFF:ISD_CONFIG_OFF + len(isd_config)] = isd_config

    # ---- app area ----------------------------------------------------
    app_off = APP_DATA_OFF
    cfg_off = app_off + len(app_bin)
    tone_off = cfg_off + len(cfg_tool)
    tone_data_off = tone_off + 0x380

    plain[app_off:app_off + len(app_bin)] = app_bin
    plain[cfg_off:cfg_off + len(cfg_tool)] = cfg_tool
    plain[tone_off:tone_off + len(tone)] = tone

    app_dir = [
        JlfEntry(APP_DIR_OFF, jl_crc16(app_bin), app_off - APP_AREA_OFF,
                 len(app_bin), FLAG_APP_FILE, 0xFF, 0, "app.bin",
                 base=APP_AREA_OFF),
        JlfEntry(APP_DIR_OFF + 0x20, jl_crc16(cfg_tool),
                 cfg_off - APP_AREA_OFF, len(cfg_tool), FLAG_APP_FILE,
                 0xFF, 0, "cfg_tool.bin", base=APP_AREA_OFF),
    ]
    for entry in app_dir:
        plain[entry.table_off:entry.table_off + ENTRY_LEN] = entry.to_bytes()

    # reserved-area rows (key_mac / VM / PRCT / BTIF) are opaque metadata:
    # reuse the vendor bytes so their non-standard padding survives.
    reserved = dict(STOCK_ROWS)
    if rows:
        reserved.update(rows)
    for off, name, fallback in (
            (APP_DIR_OFF + 0x40, "VM",
             JlfEntry(0, 0xFFFF, 0xF6000, 0x8000, FLAG_RESERVED, 0x81, 0, "VM")),
            (APP_DIR_OFF + 0x60, "PRCT",
             JlfEntry(0, 0xFFFF, 0x00000, 0xF6000, 0x92, 0x82, 0, "PRCT")),
            (APP_DIR_OFF + 0x80, "BTIF",
             JlfEntry(0, 0xFFFF, 0xFE000, 0x1000, 0x92, 0x81, 1, "BTIF")),
            (0xA0, "key_mac",
             JlfEntry(0, 0xFFFF, 0xFF000, 0x1000, FLAG_RESERVED, 0x01,
                      0xFFFF, "key_mac"))):
        blob = reserved.get(name) or fallback.to_bytes()
        plain[off:off + ENTRY_LEN] = blob

    # tone is a directory: payload follows its header; its "offset" field
    # is 0x20 and its size spans the whole blob (header included).
    tone_entry = JlfEntry(tone_off, jl_crc16(tone[0x20:]), 0x20, len(tone),
                          FLAG_DIR, 0xFF, 1, "tone", base=APP_AREA_OFF)
    plain[tone_off:tone_off + ENTRY_LEN] = tone_entry.to_bytes()

    area = plain[APP_DIR_OFF:tone_off]
    area_entry = JlfEntry(APP_AREA_OFF, jl_crc16(bytes(area)),
                          0x1E000C0, tone_off - APP_AREA_OFF, FLAG_DIR,
                          0xFF, 0, "app_area_head", base=APP_AREA_OFF)
    plain[APP_AREA_OFF:APP_AREA_OFF + ENTRY_LEN] = area_entry.to_bytes()

    return encrypt_image(plain)
