"""Tests for the JLFS container module and the firmware build pipeline.

The golden check: rebuilding the shipped image from firmware/parts must
reproduce firmware/G5605_boot_code.bin byte for byte.  Everything else
here guards the pieces of that guarantee.
"""

import hashlib
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, ROOT)

from mico.crypto import jl_crc16  # noqa: E402
from mico.jlfs import (  # noqa: E402
    APP_AREA_OFF,
    APP_DATA_OFF,
    CHIP_KEY,
    ENCRYPTED_END,
    ENCRYPTED_START,
    IMAGE_SIZE,
    JlfEntry,
    JlfImage,
    build_flash_image,
    decrypt_image,
    encrypt_image,
    extract_parts,
    extract_template,
)

FIRMWARE = os.path.join(ROOT, "firmware")
STOCK_BOOT = os.path.join(FIRMWARE, "G5605_boot_code.bin")
PARTS = os.path.join(FIRMWARE, "parts")


def _stock():
    with open(STOCK_BOOT, "rb") as fh:
        return fh.read()


def _part(name):
    with open(os.path.join(PARTS, name), "rb") as fh:
        return fh.read()


def test_decrypt_encrypt_roundtrip():
    stock = _stock()
    plain = decrypt_image(stock)
    assert bytes(encrypt_image(plain)) == stock
    # the app payload must be readable in the plaintext view
    assert plain[APP_DATA_OFF + 0x1BF08:APP_DATA_OFF + 0x1BF08 + 7] == b"Debug]:"


def test_parse_known_entries():
    image = JlfImage(_stock())
    names = [entry.name for entry in image.top]
    assert names == ["uboot.boot", "isd_config.ini", "app_dir_head",
                     "app_dir_head2", "key_mac"]
    app_names = [entry.name for entry in image.app_dir]
    assert app_names[:3] == ["app.bin", "cfg_tool.bin", "VM"]
    assert image.app_entry.data_offset == APP_DATA_OFF
    assert image.app_entry.size == 0x47038
    assert image.verify() == []


def test_extract_parts_roundtrip():
    stock = _stock()
    parts = extract_parts(stock)
    template = extract_template(stock)
    rebuilt = build_flash_image(
        uboot=parts["uboot"], isd_config=parts["isd_config"],
        app_bin=parts["app_bin"], cfg_tool=parts["cfg_tool"],
        tone=parts["tone"], header=template["header"],
        stray=template["stray"], rows=template["rows"])
    assert rebuilt == stock


def test_build_from_firmware_parts_is_golden():
    """The developer-facing five-part build must reproduce the factory."""
    stock = _stock()
    rebuilt = build_flash_image(
        uboot=_part("uboot.boot"), isd_config=_part("isd_config.ini"),
        app_bin=_part("app.bin"), cfg_tool=_part("cfg_tool.bin"),
        tone=_part("tone.bin"))
    assert rebuilt == stock
    assert hashlib.sha256(rebuilt).hexdigest().upper() == (
        "FBDA6EE68CEC926906A0EC66DF97F361D1419AF7908C6DFA3D92CECABC8BD9E5")


def test_parts_match_factory_extraction():
    stock = _stock()
    parts = extract_parts(stock)
    assert _part("app.bin") == parts["app_bin"]
    assert _part("uboot.boot") == parts["uboot"]
    assert _part("isd_config.ini") == parts["isd_config"]
    assert _part("cfg_tool.bin") == parts["cfg_tool"]
    assert _part("tone.bin") == parts["tone"]


def test_patched_build_recomputes_crcs():
    """Growing app.bin must shift later parts and fix every CRC."""
    stock = _stock()
    parts = extract_parts(stock)
    app = bytearray(parts["app_bin"])
    app[0x1BF08:0x1BF08 + 7] = b"VibeMod"
    app += b"\x00" * 16                      # force a geometry shift
    rebuilt = build_flash_image(
        uboot=parts["uboot"], isd_config=parts["isd_config"],
        app_bin=bytes(app), cfg_tool=parts["cfg_tool"],
        tone=parts["tone"], header=extract_template(stock)["header"])
    image = JlfImage(rebuilt)
    assert image.verify() == []
    assert image.app_bin[:0x1BF08 + 7].endswith(b"VibeMod")
    assert len(image.app_bin) == 0x47038 + 16
    assert image.cfg_tool == parts["cfg_tool"]
    # tone moved but kept its contents (sans its own header)
    assert image.tone_blob[0x20:] == parts["tone"][0x20:]


def test_deterministic_build():
    a = build_flash_image(uboot=_part("uboot.boot"),
                          isd_config=_part("isd_config.ini"),
                          app_bin=_part("app.bin"),
                          cfg_tool=_part("cfg_tool.bin"),
                          tone=_part("tone.bin"))
    b = build_flash_image(uboot=_part("uboot.boot"),
                          isd_config=_part("isd_config.ini"),
                          app_bin=_part("app.bin"),
                          cfg_tool=_part("cfg_tool.bin"),
                          tone=_part("tone.bin"))
    assert a == b


def test_entry_crc_detects_damage():
    """A corrupted payload must be caught by verify(), not slip through."""
    plain = decrypt_image(_stock())
    plain[APP_DATA_OFF + 0x4000] ^= 0x01
    image = JlfImage(encrypt_image(plain))
    assert image.verify()          # must report at least one problem

    # a damaged directory header cannot even be parsed
    plain = decrypt_image(_stock())
    plain[0x3040 + 4] ^= 0x01
    try:
        JlfImage(encrypt_image(plain))
    except ValueError:
        pass
    else:
        raise AssertionError("damaged entry header was accepted")


def test_image_size_constants():
    assert IMAGE_SIZE == 0x53000
    assert ENCRYPTED_START == APP_AREA_OFF
    assert ENCRYPTED_END == 0x052BF8
    assert CHIP_KEY == 0xA80F
    entry = JlfEntry(0x20, 0x1234, 0xC0, 0x100, 0, 0, 0, "x")
    assert jl_crc16(entry.to_bytes()[2:]) == int.from_bytes(
        entry.to_bytes()[:2], "little")


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
