#!/usr/bin/env bash
# MyMiController GUI launcher (Linux).
# Requires read/write access to the /dev/sgN device -- usually root,
# or a udev rule granting the active user access to the device.
set -euo pipefail
cd "$(dirname "$0")"
exec python3 MyMiController.py
