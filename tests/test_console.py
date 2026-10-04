"""Tests for the console encoding guard.

Regression test for the 2026-10-04 release failure: the Windows
release runner used a cp1252 console, and printing Chinese text raised
UnicodeEncodeError, failing the build step with exit code 1.
"""

import io
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, ROOT)

from mico.console import init_console  # noqa: E402


def test_init_console_survives_without_streams():
    # Frozen GUI builds may have sys.stdout == None; must not raise.
    saved_out, saved_err = sys.stdout, sys.stderr
    try:
        sys.stdout = None
        sys.stderr = None
        init_console()
    finally:
        sys.stdout, sys.stderr = saved_out, saved_err


def test_init_console_never_raises_on_plain_stream():
    saved_out, saved_err = sys.stdout, sys.stderr
    try:
        sys.stdout = io.StringIO()
        sys.stderr = io.StringIO()
        init_console()
    finally:
        sys.stdout, sys.stderr = saved_out, saved_err


def test_chinese_prints_after_guard():
    saved_out = sys.stdout
    buf = io.StringIO()
    try:
        sys.stdout = buf
        init_console()
        print("零件校验通过: rebuild == 出厂镜像")
    finally:
        sys.stdout = saved_out
    assert "零件校验通过" in buf.getvalue()

