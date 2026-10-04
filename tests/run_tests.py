"""Run all tests in this directory (works without pytest installed)."""

import os
import sys
import traceback

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from mico.console import init_console  # noqa: E402


def main() -> int:
    init_console()
    failures = 0
    ran = 0
    for filename in sorted(os.listdir(HERE)):
        if not (filename.startswith("test_") and filename.endswith(".py")):
            continue
        module_name = filename[:-3]
        print("== %s ==" % filename)
        namespace = {"__name__": "test_" + module_name, "__file__": os.path.join(HERE, filename)}
        try:
            with open(os.path.join(HERE, filename), "r", encoding="utf-8") as fh:
                code = compile(fh.read(), filename, "exec")
            exec(code, namespace)
        except Exception:
            failures += 1
            print("  ERROR while loading")
            traceback.print_exc()
            continue

        for name, fn in sorted(namespace.items()):
            if name.startswith("test_") and callable(fn):
                ran += 1
                try:
                    fn()
                    print("  PASS %s" % name)
                except Exception:
                    failures += 1
                    print("  FAIL %s" % name)
                    traceback.print_exc()

    print()
    print("%d test(s) run, %d failure(s)" % (ran, failures))
    return 1 if failures else 0


if __name__ == "__main__":
    sys.exit(main())
