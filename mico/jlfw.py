"""Parser for JieLi .fw / .ufw firmware containers (pure Python).

Containers shipped by the vendor flashing tools have the layout:

    [header 0x40 bytes] [entry table 0x50*n] [payloads...] [tail]

Headers and the entry table are obfuscated with the "ENC" cipher
(key 0xFFFF). Payloads are stored either plain, with the "SFC"
address-dependent cipher, or (rarely) the plain "ENC" cipher, and the
entry CRC (computed over the padded payload length) tells us which one.

Verified against the vendor G5605 package:

    jl_isd.fw (589,312 bytes, chip key 0xA80F)
      - flash.bin      339,968 bytes
      - isd_config.ini   3,725 bytes
      - ota.bin        219,898 bytes
      - script.ver          27 bytes
      - br23loader.bin  24,576 bytes
      - tail.bin            64 bytes
"""

from __future__ import annotations

from .crypto import jl_crc16, jl_enc_cipher, jl_sfc_cipher

__all__ = ["FwImage", "FwEntry", "load", "loads"]

HEADER_LEN = 0x40
ENTRY_LEN = 0x50
FLASH_TYPES = [0x00, 0x20, 0x21, 0x22, 0x23, 0x24]


class FwEntry:
    def __init__(self, raw: bytes, key: int):
        plain = jl_enc_cipher(raw, key)
        self.kind = int.from_bytes(plain[0:2], "little")
        self.index = int.from_bytes(plain[2:4], "little")
        self.crc = int.from_bytes(plain[4:6], "little")
        self.offset = int.from_bytes(plain[8:12], "little")
        self.size = int.from_bytes(plain[12:16], "little")
        self.padded = int.from_bytes(plain[16:20], "little")
        raw_name = plain[0x40:0x50].split(b"\x00")[0]
        self.name = raw_name.decode("latin1")

    def __repr__(self) -> str:
        return ("FwEntry(kind=0x%02X off=0x%X size=%d name=%r)"
                % (self.kind, self.offset, self.size, self.name))


class FwImage:
    def __init__(self, data: bytes, header_key: int, fmt: str):
        self.data = data
        self.format = fmt
        self.header_key = header_key
        head = jl_enc_cipher(data[:HEADER_LEN], header_key)
        self.header_crc = int.from_bytes(head[0:2], "little")
        self.list_crc = int.from_bytes(head[2:4], "little")
        self.size = int.from_bytes(head[4:8], "little")
        self.count = int.from_bytes(head[8:10], "little")
        self.chip = head[0x10:0x40].split(b"\x00")[0].decode("latin1")
        self.header_ok = jl_crc16(head[2:]) == self.header_crc
        self.list_ok = (
            jl_crc16(data[HEADER_LEN : HEADER_LEN + self.count * ENTRY_LEN]) == self.list_crc
        )
        self.entries = [
            FwEntry(data[HEADER_LEN + i * ENTRY_LEN : HEADER_LEN + (i + 1) * ENTRY_LEN], header_key)
            for i in range(self.count)
        ]
        self.chip_key: int | None = None

    # ------------------------------------------------------------------

    def raw(self, entry: FwEntry) -> bytes:
        return self.data[entry.offset : entry.offset + entry.size]

    def find_chip_key(self) -> int | None:
        for entry in self.entries:
            if entry.kind == 0x34 and entry.size >= 32:
                first = self.raw(entry)[:32]
                for key in range(0x10000):
                    decoded = jl_enc_cipher(first, key)
                    if decoded[:1] in (b"#", b"\xef"):
                        for probe in (b"#" * 32, b"\xef\xbb\xbf" + b"#" * 29):
                            if decoded == probe:
                                return (key ^ ((entry.offset >> 2) & 0xFFFF)) & 0xFFFF
        return None

    def plain(self, entry: FwEntry) -> bytes:
        """Return the decoded payload, using the entry CRC to pick a codec."""
        body = self.raw(entry)
        n = entry.padded or len(body)

        candidates = [("raw", body)]
        if self.chip_key is not None and entry.kind != 0x00:
            candidates.append(("sfc-off", jl_sfc_cipher(body, self.chip_key, entry.offset)))
            candidates.append(("sfc-0", jl_sfc_cipher(body, self.chip_key, 0)))
            candidates.append(("enc", jl_enc_cipher(body, self.chip_key)))

        if n:
            for _, candidate in candidates:
                if jl_crc16(candidate[:n]) == entry.crc:
                    return candidate

        # No CRC match: fall back to format heuristics.
        if self.format == "ufw" and self.chip_key is not None and entry.kind not in FLASH_TYPES:
            return jl_sfc_cipher(body, self.chip_key, entry.offset)
        return body

    def entry_ok(self, entry: FwEntry) -> bool:
        n = entry.padded or len(entry_raw := self.raw(entry))
        if not n:
            return False
        return jl_crc16(self.plain(entry)[:n]) == entry.crc

    def extract_all(self) -> dict[str, bytes]:
        out = {}
        for entry in self.entries:
            name = entry.name or ("entry_%02X" % entry.kind)
            out[name] = self.plain(entry)
        return out


def _find_header_key(data: bytes) -> int | None:
    if len(data) < 8:
        return None
    for key in [0xFFFF] + list(range(0xFFFF)):
        if int.from_bytes(jl_enc_cipher(data[:8], key)[4:8], "little") != len(data):
            continue
        head = jl_enc_cipher(data[:HEADER_LEN], key)
        if int.from_bytes(head[0:2], "little") == jl_crc16(head[2:]):
            return key
    return None


def loads(data: bytes, fmt: str) -> FwImage:
    if fmt == "fw":
        key = _find_header_key(data)
        if key is None:
            raise ValueError("no valid header key found (.fw)")
        image = FwImage(data, key, "fw")
        image.chip_key = key
    else:
        image = FwImage(data, 0xFFFF, "ufw")
        image.chip_key = image.find_chip_key()
    return image


def load(path: str) -> FwImage:
    with open(path, "rb") as fh:
        data = fh.read()
    fmt = "fw" if path.lower().endswith(".fw") else "ufw"
    return loads(data, fmt)