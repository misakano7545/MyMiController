"""Pure-Python implementations of the JieLi CRC/cipher primitives.

No third-party dependencies are required.

The CRC-16 variant used by JieLi firmware is the "CRC-16/CCITT-FALSE"
polynomial (0x1021, init 0x0000, no reflection, no final XOR).
The CRC-32 variant is the reflected IEEE polynomial with a non-standard
init value of 0x26536734.

Reference implementation: kagaimiq/jl-uboot-tool (MIT).
"""

from __future__ import annotations

_CRC16_TABLE: list[int] = []


def _make_crc16_table() -> None:
    for byte in range(256):
        crc = byte << 8
        for _ in range(8):
            if crc & 0x8000:
                crc = ((crc << 1) ^ 0x1021) & 0xFFFF
            else:
                crc = (crc << 1) & 0xFFFF
        _CRC16_TABLE.append(crc)


_make_crc16_table()

_REV = False  # None of the JieLi CRCs use reflection.


def jl_crc16(data: bytes, crc: int = 0x0000) -> int:
    """CRC-16/CCITT-FALSE, as used throughout JieLi firmwares."""
    for byte in data:
        crc = ((crc << 8) & 0xFFFF) ^ _CRC16_TABLE[((crc >> 8) ^ byte) & 0xFF]
    return crc


def jl_crc16_multi(*chunks: bytes, crc: int = 0x0000) -> int:
    for chunk in chunks:
        crc = jl_crc16(chunk, crc)
    return crc


_CRC32_TABLE: list[int] = []


def _make_crc32_table() -> None:
    for byte in range(256):
        crc = byte
        for _ in range(8):
            if crc & 1:
                crc = (crc >> 1) ^ 0xEDB88320
            else:
                crc >>= 1
        _CRC32_TABLE.append(crc)


_make_crc32_table()


def jl_crc32(data: bytes, crc: int = 0x26536734) -> int:
    """JieLi CRC-32 (reflected IEEE poly, init 0x26536734)."""
    crc &= 0xFFFFFFFF
    for byte in data:
        crc = _CRC32_TABLE[(crc ^ byte) & 0xFF] ^ (crc >> 8)
    return crc


_MENG_LI_MAGIC = "孟黎我爱你，玉林".encode("gb2312")


def jl_crc_cipher(data: bytes, key: int = 0xFFFFFFFF) -> bytes:
    """Apply (or remove) the "CrcDecode" / "孟黎" cipher in-place on a copy.

    The cipher is a byte-wise XOR with a keystream derived from CRC-16
    calculations over the magic string.
    """
    crc = jl_crc16((key >> 16).to_bytes(2, "little"), key & 0xFFFF)
    out = bytearray(len(data))
    magic_len = len(_MENG_LI_MAGIC)
    for i, byte in enumerate(data):
        crc = jl_crc16(_MENG_LI_MAGIC[i % magic_len : i % magic_len + 1], crc)
        out[i] = byte ^ (crc & 0xFF)
    return bytes(out)


def jl_enc_cipher(data: bytes, key: int = 0xFFFF) -> bytes:
    """Apply (or remove) the "ENC" / crc16-shift cipher on a copy.

    Returns the final LFSR state as well when used with `jl_enc_cipher_state`.
    """
    out = bytearray(len(data))
    for i, byte in enumerate(data):
        out[i] = byte ^ (key & 0xFF)
        if key & 0x8000:
            key = ((key << 1) & 0xFFFF) ^ 0x1021
        else:
            key = (key << 1) & 0xFFFF
    return bytes(out)


def jl_enc_cipher_state(data: bytes, key: int = 0xFFFF) -> tuple[bytes, int]:
    """Same as `jl_enc_cipher` but also returns the final cipher state."""
    out = bytearray(len(data))
    for i, byte in enumerate(data):
        out[i] = byte ^ (key & 0xFF)
        if key & 0x8000:
            key = ((key << 1) & 0xFFFF) ^ 0x1021
        else:
            key = (key << 1) & 0xFFFF
    return bytes(out), key


def jl_sfc_cipher(data: bytes, key: int, base: int) -> bytes:
    """Apply the "SFC" block cipher (32-byte blocks, address-dependent key)."""
    out = bytearray()
    for at in range(0, len(data), 32):
        block = data[at : at + 32]
        if len(block) < 32:
            block = block.ljust(32, b"\x00")
        block_key = (key ^ (((base + at) & 0xFFFFFFFF) >> 2)) & 0xFFFF
        out += jl_enc_cipher(block, block_key)
    return bytes(out[: len(data)])


def jl_rxgp_cipher(data: bytes) -> bytes:
    """Apply (or remove) the "RxGp" cipher (Lehmer LCG seeded with 'RxGp')."""
    rng = 0x70477852  # "RxGp"
    out = bytearray(len(data))
    for i, byte in enumerate(data):
        rng = (rng * 16807) + (rng // 127773) * -0x7FFFFFFF
        out[i] = byte ^ (rng & 0xFF)
    return bytes(out)
