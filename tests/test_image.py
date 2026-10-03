"""Tests for the image helpers and the .fw/.ufw container parser.

The container test uses the actual vendor package when present (see the
VENDOR_PKG constant); otherwise it is skipped so the suite works on a
fresh checkout.
"""

import hashlib
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, ROOT)

from mico.image import (  # noqa: E402
    DEVICE_RECORD_OFFSET,
    DEVICE_RECORD_SIZE,
    FLASH_SIZE,
    IMAGE_SIZE,
    SETTINGS_OFFSET,
    SETTINGS_SIZE,
    build_full_image,
    split_full_image,
)
from mico.jlfw import load  # noqa: E402

FIRMWARE_DIR = os.path.join(ROOT, "firmware")
DEFAULT_IMAGE = os.path.join(FIRMWARE_DIR, "G5605_V1.0_flash_image.bin")
BOOT_CODE = os.path.join(FIRMWARE_DIR, "G5605_boot_code.bin")

VENDOR_PKG = os.path.join(os.path.dirname(ROOT), "固件包", "jl_isd.fw")


def test_image_roundtrip():
    boot = bytes(range(256)) * 4
    record = bytes(range(32))
    image = build_full_image(boot, record)
    assert len(image) == FLASH_SIZE
    back_boot, back_record = split_full_image(image)
    assert back_boot[: len(boot)] == boot
    assert back_record == record


def test_settings_area_bounds():
    assert SETTINGS_OFFSET == 0xF6000
    assert SETTINGS_OFFSET + SETTINGS_SIZE == FLASH_SIZE
    assert SETTINGS_SIZE > 0


def test_build_firmware_settings_merge():
    import importlib.util
    import tempfile

    spec = importlib.util.spec_from_file_location(
        "build_firmware_settings_test",
        os.path.join(ROOT, "tools", "build_firmware.py"),
    )
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)

    settings = bytes(i % 251 for i in range(SETTINGS_SIZE))
    full = bytearray(b"\xFF" * FLASH_SIZE)
    non_ff = module.merge_settings(full, settings)
    assert non_ff == SETTINGS_SIZE
    assert full[SETTINGS_OFFSET:] == settings
    assert full[:SETTINGS_OFFSET] == b"\xFF" * SETTINGS_OFFSET

    with tempfile.TemporaryDirectory() as tmp:
        full_path = os.path.join(tmp, "backup.bin")
        bare_path = os.path.join(tmp, "settings.bin")
        bad_path = os.path.join(tmp, "bad.bin")
        with open(full_path, "wb") as fh:
            fh.write(full)
        with open(bare_path, "wb") as fh:
            fh.write(settings)
        with open(bad_path, "wb") as fh:
            fh.write(b"x" * 16)
        assert module.load_settings(full_path) == settings
        assert module.load_settings(bare_path) == settings
        try:
            module.load_settings(bad_path)
        except SystemExit:
            pass
        else:
            raise AssertionError("load_settings accepted a wrong-size file")


def test_shipped_image_matches_boot_code():
    if not (os.path.exists(DEFAULT_IMAGE) and os.path.exists(BOOT_CODE)):
        print("SKIP shipped image (files missing)")
        return
    with open(DEFAULT_IMAGE, "rb") as fh:
        image = fh.read()
    with open(BOOT_CODE, "rb") as fh:
        boot = fh.read()
    # Vendor flash.bin is IMAGE_SIZE bytes; our image equals it except that
    # the 32-byte device record slot is filled in.
    assert len(boot) == IMAGE_SIZE
    assert len(image) == IMAGE_SIZE
    assert image[:DEVICE_RECORD_OFFSET] == boot[:DEVICE_RECORD_OFFSET]
    assert boot[DEVICE_RECORD_OFFSET:] == b"\xFF" * DEVICE_RECORD_SIZE
    assert image[DEVICE_RECORD_OFFSET:].startswith(b"G5605_V1.0")


def test_device_record_has_pid():
    if not os.path.exists(DEFAULT_IMAGE):
        print("SKIP device record (image missing)")
        return
    with open(DEFAULT_IMAGE, "rb") as fh:
        image = fh.read()
    record = image[DEVICE_RECORD_OFFSET : DEVICE_RECORD_OFFSET + DEVICE_RECORD_SIZE]
    assert record.startswith(b"G5605_V1.0")


def test_unpack_vendor_package():
    if not os.path.exists(VENDOR_PKG):
        print("SKIP vendor package (not present)")
        return
    image = load(VENDOR_PKG)
    assert image.chip == "AC695X"
    assert image.chip_key == 0xA80F
    assert image.header_ok
    assert image.list_ok
    entries = image.extract_all()
    assert hashlib.sha256(entries["flash.bin"]).hexdigest().upper() == (
        "FBDA6EE68CEC926906A0EC66DF97F361D1419AF7908C6DFA3D92CECABC8BD9E5"
    )
    ini = entries["isd_config.ini"].decode("utf-8", "replace")
    assert "PID=G5605_V1.0" in ini


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
