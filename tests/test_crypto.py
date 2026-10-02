"""Tests for the mico.crypto primitives.

The expected values come from a byte-for-byte comparison against the
reference implementation in kagaimiq/jl-uboot-tool (crcmod-based), so these
tests pin our pure-Python ports to the original behaviour.
"""

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from mico.crypto import (  # noqa: E402
    jl_crc16,
    jl_crc32,
    jl_crc_cipher,
    jl_enc_cipher,
    jl_rxgp_cipher,
    jl_sfc_cipher,
)


def test_crc16_vectors():
    assert jl_crc16(b"") == 0x0000
    assert jl_crc16(b"123456789") == 0x31C3
    assert jl_crc16(bytes.fromhex("0123456789abcdef")) == 0xA955
    assert jl_crc16(bytes(32)) == 0x0000


def test_crc32_vectors():
    assert jl_crc32(b"") == 0x26536734
    assert jl_crc32(b"123456789") == 0x47C600F5
    assert jl_crc32(bytes(32)) == 0x1D4F3404


def test_crc_cipher_fixed_vector():
    assert jl_crc_cipher(bytes(32)).hex() == (
        "2fa481cc4ec15deaeea2b6a6298ad4f7"
        "0384ebe1cf8a8a14bde6dd1cd0f8463b"
    )


def test_enc_cipher_is_its_own_inverse():
    data = bytes(range(64))
    assert jl_enc_cipher(jl_enc_cipher(data)) == data
    assert jl_enc_cipher(bytes(8)).hex() == "ffdf9f1f1f3e7cf8"


def test_sfc_roundtrip():
    data = bytes(range(100))
    encrypted = jl_sfc_cipher(data, 0xA80F, 0x53400)
    assert encrypted != data
    assert jl_sfc_cipher(encrypted, 0xA80F, 0x53400) == data


def test_rxgp_deterministic():
    assert jl_rxgp_cipher(bytes(16)) == jl_rxgp_cipher(bytes(16))
    assert jl_rxgp_cipher(b"\x00" * 4) != b"\x00" * 4


if __name__ == "__main__":
    import traceback

    failures = 0
    for name, fn in sorted(globals().items()):
        if name.startswith("test_") and callable(fn):
            try:
                fn()
                print("PASS %s" % name)
            except Exception:
                failures += 1
                print("FAIL %s" % name)
                traceback.print_exc()
    sys.exit(1 if failures else 0)