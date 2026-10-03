"""Flash image helpers for the G5605 gamepad layout.

The 1 MB SPI-NOR flash is laid out as follows:

    0x00000 .. 0x53000   firmware image, as shipped in the vendor package
                         (`flash.bin` is exactly this size; the last 32
                         bytes at 0x52FE0 are the device record slot,
                         filled with FF in the vendor package)
    0x53000 .. 0xF6000   unused / 0xFF
    0xF6000 .. 0xFFFFF   VM/config area (SETTINGS_OFFSET..) + 8-byte end
                         marker at 0xFFF40

The factory jig writes a 32-byte device record at 0x52FE0 containing the
PID ("G5605_V1.0" + MAC etc.). Our shipped image
`firmware/G5605_V1.0_flash_image.bin` is the vendor flash.bin with that
record filled in, so flashing it restores the gamepad exactly as observed
on a factory unit.

Flashing only the first 0x53000 bytes leaves the settings area untouched
(calibration and mode settings survive).  A full 1 MB image overwrites
it: build those with ``--settings`` / ``merge_settings()`` so they carry
the live settings area, otherwise the gamepad loses its calibration and
develops LED / mode glitches.
"""

from __future__ import annotations

__all__ = [
    "FLASH_SIZE",
    "IMAGE_SIZE",
    "BOOT_CODE_SIZE",
    "DEVICE_RECORD_OFFSET",
    "DEVICE_RECORD_SIZE",
    "SETTINGS_OFFSET",
    "SETTINGS_SIZE",
    "build_full_image",
    "split_full_image",
]

FLASH_SIZE = 0x100000             # 1 MiB SPI-NOR
IMAGE_SIZE = 0x53000              # firmware image region (vendor flash.bin size)
BOOT_CODE_SIZE = IMAGE_SIZE       # alias: the vendor calls this "flash.bin"
DEVICE_RECORD_OFFSET = 0x52FE0
DEVICE_RECORD_SIZE = 32
SETTINGS_OFFSET = 0xF6000         # start of the VM/config (settings) area
SETTINGS_SIZE = FLASH_SIZE - SETTINGS_OFFSET


def build_full_image(boot_code: bytes, device_record: bytes = b"",
                     base: bytes | None = None) -> bytes:
    """Build a flashable image from a boot code blob.

    `base` optionally provides the *current* flash contents so preserved
    regions (VM/config area) can be copied over.
    """
    if len(boot_code) > IMAGE_SIZE:
        raise ValueError("boot code too large: %d > %d" % (len(boot_code), IMAGE_SIZE))

    image = bytearray(base if base is not None else bytes(FLASH_SIZE))
    if len(image) != FLASH_SIZE:
        raise ValueError("base image must be exactly %d bytes" % FLASH_SIZE)

    image[: len(boot_code)] = boot_code
    if device_record:
        if len(device_record) != DEVICE_RECORD_SIZE:
            raise ValueError("device record must be %d bytes" % DEVICE_RECORD_SIZE)
        image[DEVICE_RECORD_OFFSET : DEVICE_RECORD_OFFSET + DEVICE_RECORD_SIZE] = device_record
    return bytes(image)


def split_full_image(image: bytes) -> tuple[bytes, bytes]:
    """Split a full 1 MB dump into (boot_code, device_record)."""
    if len(image) != FLASH_SIZE:
        raise ValueError("full image must be exactly %d bytes" % FLASH_SIZE)
    return (
        image[:IMAGE_SIZE],
        image[DEVICE_RECORD_OFFSET : DEVICE_RECORD_OFFSET + DEVICE_RECORD_SIZE],
    )
