"""Console helpers shared by the CLI tools and the GUI.

On non-UTF-8 consoles (for example an English Windows runner whose code
page is cp1252) printing Chinese text raises ``UnicodeEncodeError`` and
kills the process.  ``init_console()`` makes stdout/stderr degrade
gracefully instead: text that cannot be represented is replaced with
``?``, so a build never fails just because of a log line.
"""

from __future__ import annotations

import sys


def init_console() -> None:
    """Best-effort: make stdout/stderr UTF-8 or at least never raise."""
    for stream in (sys.stdout, sys.stderr):
        if stream is None:
            continue
        try:
            stream.reconfigure(encoding="utf-8", errors="replace")
        except (AttributeError, ValueError, OSError):
            # Python < 3.7, a frozen GUI build without a console, or a
            # stream that refuses reconfiguration: fall back to errors=replace.
            try:
                stream.reconfigure(errors="replace")
            except (AttributeError, ValueError, OSError):
                pass

