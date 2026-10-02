"""mico - MyMiController firmware flashing library.

Talks to the JieLi BR23 (AC695N) bootloader found in the Xiaomi Gamepad
("BR23 UBOOT1.00") over USB SCSI passthrough, with zero third-party
dependencies.
"""

from .crypto import (
    jl_crc16,
    jl_crc32,
    jl_crc_cipher,
    jl_enc_cipher,
    jl_sfc_cipher,
    jl_rxgp_cipher,
)
from .device import UBOOTDevice, DeviceNotFoundError, FlashError
from .image import (
    FLASH_SIZE,
    BOOT_CODE_SIZE,
    DEVICE_RECORD_OFFSET,
    build_full_image,
    split_full_image,
)

__version__ = "1.0.0"

__all__ = [
    "jl_crc16", "jl_crc32", "jl_crc_cipher", "jl_enc_cipher",
    "jl_sfc_cipher", "jl_rxgp_cipher",
    "UBOOTDevice", "DeviceNotFoundError", "FlashError",
    "FLASH_SIZE", "BOOT_CODE_SIZE", "DEVICE_RECORD_OFFSET",
    "build_full_image", "split_full_image",
]