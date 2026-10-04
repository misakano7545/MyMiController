"""mico GUI - a minimal tkinter front-end for the MyMiController flasher.

Features:
  * Detect gamepad connection (normal mode / flashing mode / not found)
  * Back up firmware  (read full 1 MB flash -> .bin file)
  * Flash shipped firmware  (verified image in firmware/)
  * Restore a backup  (any full 1 MB dump)
  * Flash a custom image  (advanced, e.g. for firmware development)
  * Reset the gamepad back into normal (Xbox) mode

The GUI intentionally uses only the Python standard library (tkinter) so it
can be frozen into a single executable with PyInstaller or shipped as a
plain script.
"""

from __future__ import annotations

import os
import queue
import sys
import threading
import traceback

import tkinter as tk
from tkinter import filedialog, messagebox, ttk

if __package__ in (None, ""):  # allow running as a plain script
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from mico.console import init_console
from mico.device import (
    UBOOTDevice,
    DeviceNotFoundError,
    find_normal_mode_gamepads,
    list_bootloader_disks,
)
from mico.image import FLASH_SIZE

APP_TITLE = "MyMiController - 小米游戏手柄刷写工具"
FIRMWARE_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "firmware")
DEFAULT_IMAGE = os.path.join(FIRMWARE_DIR, "G5605_V1.0_flash_image.bin")


class FlashWorker(threading.Thread):
    """Runs a device operation in the background, reporting via a queue."""

    def __init__(self, action, on_done, on_log, on_progress):
        super().__init__(daemon=True)
        self.action = action
        self.on_done = on_done
        self.on_log = on_log
        self.on_progress = on_progress

    def run(self):
        try:
            result = self.action(self.on_log, self.on_progress)
        except Exception as exc:
            detail = traceback.format_exc()
            self.on_done(None, exc, detail)
        else:
            self.on_done(result, None, None)


class FlashApp:
    def __init__(self, root: tk.Tk):
        self.root = root
        self.root.title(APP_TITLE)
        self.root.minsize(560, 460)

        self.busy = False
        self.device = None
        self.msg_queue: queue.Queue = queue.Queue()

        self._build_ui()
        self.root.after(80, self._poll_queue)
        self._set_status("未连接", "idle")

    # ------------------------------------------------------------------

    def _build_ui(self):
        style = ttk.Style()
        try:
            style.theme_use("vista")
        except tk.TclError:
            pass

        outer = ttk.Frame(self.root, padding=12)
        outer.pack(fill="both", expand=True)

        title = ttk.Label(outer, text="小米游戏手柄 (G5605 / BR23) 刷写工具",
                          font=("Microsoft YaHei UI", 13, "bold"))
        title.pack(anchor="w")

        subtitle = ttk.Label(
            outer,
            text="备份、刷入、恢复固件。无需官方软件。",
            foreground="#555",
        )
        subtitle.pack(anchor="w", pady=(2, 10))

        buttons = ttk.Frame(outer)
        buttons.pack(fill="x")

        self.btn_detect = ttk.Button(buttons, text="1. 检测手柄连接状态", command=self.on_detect)
        self.btn_backup = ttk.Button(buttons, text="2. 备份手柄固件", command=self.on_backup)
        self.btn_flash = ttk.Button(buttons, text="3. 刷入项目固件", command=self.on_flash_default)
        self.btn_restore = ttk.Button(buttons, text="4. 恢复备份", command=self.on_restore)
        self.btn_custom = ttk.Button(buttons, text="5. 刷入自选镜像…", command=self.on_flash_custom)
        self.btn_reset = ttk.Button(buttons, text="6. 退出手柄刷写模式", command=self.on_reset)

        for i, button in enumerate(
            [self.btn_detect, self.btn_backup, self.btn_flash,
             self.btn_restore, self.btn_custom, self.btn_reset]
        ):
            button.grid(row=i // 2, column=i % 2, sticky="ew", padx=3, pady=3)
        buttons.columnconfigure(0, weight=1)
        buttons.columnconfigure(1, weight=1)

        status_box = ttk.Frame(outer)
        status_box.pack(fill="x", pady=(10, 0))
        ttk.Label(status_box, text="当前状态：", foreground="#555").pack(side="left")
        self.conn_state = ttk.Label(status_box, text="尚未检测", foreground="#777")
        self.conn_state.pack(side="left")

        help_box = ttk.LabelFrame(outer, text="如何进入刷写模式", padding=8)
        help_box.pack(fill="x", pady=(12, 8))
        ttk.Label(
            help_box,
            justify="left",
            text=(
                "1. 用数据线把手柄接到电脑（1 号灯 / 有线模式）\n"
                "2. 先点「1. 检测手柄连接状态」确认电脑认得手柄\n"
                "3. 再按住 HOME + X + Y 三个键约 3 秒进入刷写模式\n"
                "4. 指示灯熄灭、检测显示 “BR23 UBOOT1.00” 后即可刷写"
            ),
        ).pack(anchor="w")

        progress_box = ttk.Frame(outer)
        progress_box.pack(fill="x", pady=(4, 8))
        self.progress = ttk.Progressbar(progress_box, mode="determinate", maximum=100)
        self.progress.pack(fill="x")
        self.status = ttk.Label(progress_box, text="")
        self.status.pack(anchor="w", pady=(4, 0))

        log_box = ttk.LabelFrame(outer, text="日志", padding=4)
        log_box.pack(fill="both", expand=True)
        self.log = tk.Text(log_box, height=10, state="disabled", wrap="word")
        scrollbar = ttk.Scrollbar(log_box, command=self.log.yview)
        self.log.configure(yscrollcommand=scrollbar.set)
        scrollbar.pack(side="right", fill="y")
        self.log.pack(side="left", fill="both", expand=True)

    # ------------------------------------------------------------------
    # logging / status helpers

    def _log(self, message: str):
        self.msg_queue.put(("log", message))

    def _set_status(self, text: str, kind: str = "info"):
        colors = {"idle": "#777", "info": "#333", "ok": "#0a7d28", "error": "#b00020"}
        self.status.configure(text=text, foreground=colors.get(kind, "#333"))

    def _progress(self, done, total):
        self.msg_queue.put(("progress", (done, total)))

    def _poll_queue(self):
        try:
            while True:
                kind, payload = self.msg_queue.get_nowait()
                if kind == "log":
                    self._append_log(payload)
                elif kind == "progress":
                    done, total = payload
                    pct = (done / total * 100.0) if total else 0.0
                    self.progress["value"] = pct
                    self._set_status("进度 %d%% (%s / %s)" % (
                        int(pct), _fmt_size(done), _fmt_size(total)), "info")
                elif kind == "done":
                    result, exc, detail = payload
                    self._finish_operation(result, exc, detail)
                elif kind == "state":
                    text, color = payload
                    self.conn_state.configure(text=text, foreground=color)
        except queue.Empty:
            pass
        self.root.after(80, self._poll_queue)

    def _append_log(self, message: str):
        self.log.configure(state="normal")
        self.log.insert("end", message + "\n")
        self.log.see("end")
        self.log.configure(state="disabled")

    # ------------------------------------------------------------------

    def _run(self, title, action, done_message="操作完成"):
        if self.busy:
            messagebox.showinfo(APP_TITLE, "已有操作在进行中，请稍候。")
            return
        self.busy = True
        self._set_buttons(False)
        self.progress["value"] = 0
        self._log("")
        self._log("=== %s ===" % title)

        def worker_action(on_log, on_progress):
            return action(on_log, on_progress)

        def finished(result, exc, detail):
            self.msg_queue.put(("done", (result, exc, detail)))

        FlashWorker(worker_action, finished, self._log, self._progress).start()

    def _finish_operation(self, result, exc, detail):
        self.busy = False
        self._set_buttons(True)
        if exc is not None:
            self._log("失败: %s" % exc)
            self._log(detail)
            self._set_status("操作失败", "error")
            messagebox.showerror(APP_TITLE, "操作失败：\n%s" % exc)
        else:
            self._set_status("操作完成", "ok")
            messagebox.showinfo(APP_TITLE, result or "操作完成")

    def _set_buttons(self, enabled: bool):
        state = "normal" if enabled else "disabled"
        for button in (self.btn_detect, self.btn_backup, self.btn_flash,
                       self.btn_restore, self.btn_custom, self.btn_reset):
            button.configure(state=state)

    # ------------------------------------------------------------------
    # operations

    def on_detect(self):
        """Step 1: figure out what mode the gamepad is currently in."""
        self._log("")
        self._log("=== 检测手柄连接状态 ===")

        def show_state(text, color):
            self.msg_queue.put(("state", (text, color)))

        def worker(on_log, on_progress):
            on_log("正在检查 USB 设备…")
            boot_disks = list_bootloader_disks()
            if boot_disks:
                device = boot_disks[0]
                on_log("发现刷写模式设备: %s" % device["name"])
                show_state("已进入刷写模式（%s）" % device["name"], "#0a7d28")
                on_log("可以执行第 2~6 项操作。")
                return "已检测到刷写模式手柄：\n%s" % device["name"]

            normal = find_normal_mode_gamepads()
            if normal:
                on_log("发现正常模式手柄: %s" % normal[0]["name"])
                on_log("请按住 HOME + X + Y 约 3 秒进入刷写模式。")
                show_state("手柄已连接，但未进入刷写模式", "#b06a00")
                return (
                    "手柄已连接电脑（正常模式）。\n\n"
                    "下一步：按住 HOME + X + Y 约 3 秒进入刷写模式，\n"
                    "然后再次点击「1. 检测手柄连接状态」。"
                )

            on_log("未发现手柄（正常模式或刷写模式都没有）。")
            show_state("未检测到手柄", "#b00020")
            return (
                "没有检测到手柄。\n\n"
                "请确认：\n"
                "  · 数据线已连接到电脑（能传数据的线）\n"
                "  · 手柄已开机（1 号灯 / 有线模式）\n"
                "  · 正常模式下重新拔插一次数据线\n\n"
                "然后再次点击「1. 检测手柄连接状态」。"
            )

        def finished(result, exc, detail):
            if exc is not None:
                self.msg_queue.put(("state", ("检测失败", "#b00020")))
            self.msg_queue.put(("done", (result, exc, detail)))

        if self.busy:
            messagebox.showinfo(APP_TITLE, "已有操作在进行中，请稍候。")
            return
        self.busy = True
        self._set_buttons(False)
        self.progress["value"] = 0
        FlashWorker(worker, finished, self._log, self._progress).start()

    def _connect(self, on_log):
        on_log("正在查找刷写设备…")
        device = UBOOTDevice(log=on_log)
        device.open(timeout=15)
        return device

    def on_backup(self):
        path = filedialog.asksaveasfilename(
            title="保存备份固件",
            defaultextension=".bin",
            initialfile="手柄固件备份.bin",
            filetypes=[("固件镜像", "*.bin"), ("所有文件", "*.*")],
        )
        if not path:
            return

        def action(on_log, on_progress):
            device = self._connect(on_log)
            try:
                on_log("读取 1MB 全片闪存…")
                data = device.read(0, FLASH_SIZE, progress=on_progress)
                with open(path, "wb") as fh:
                    fh.write(data)
                on_log("已保存到: %s" % path)
                return "备份完成：\n%s" % path
            finally:
                device.close()

        self._run("备份手柄固件", action)

    def on_flash_default(self):
        if not os.path.exists(DEFAULT_IMAGE):
            messagebox.showerror(APP_TITLE, "找不到项目固件文件:\n%s" % DEFAULT_IMAGE)
            return
        if not messagebox.askyesno(
            APP_TITLE,
            "将把手柄刷入项目固件。\n\n固件文件: %s\n\n确认继续？" % DEFAULT_IMAGE,
        ):
            return
        self._flash_file(DEFAULT_IMAGE, "刷入项目固件")

    def on_restore(self):
        path = filedialog.askopenfilename(
            title="选择要恢复的备份文件",
            filetypes=[("固件镜像", "*.bin"), ("所有文件", "*.*")],
        )
        if not path:
            return
        if not messagebox.askyesno(
            APP_TITLE,
            "将从备份恢复手柄固件：\n\n%s\n\n确认继续？" % path,
        ):
            return
        self._flash_file(path, "恢复备份")

    def on_flash_custom(self):
        path = filedialog.askopenfilename(
            title="选择要刷入的镜像文件",
            filetypes=[("固件镜像", "*.bin"), ("所有文件", "*.*")],
        )
        if not path:
            return
        if not messagebox.askyesno(
            APP_TITLE,
            "高级操作：刷入自选镜像\n\n%s\n\n请确认镜像来源可靠。继续？" % path,
        ):
            return
        self._flash_file(path, "刷入自选镜像")

    def _flash_file(self, path, title):
        def action(on_log, on_progress):
            with open(path, "rb") as fh:
                data = fh.read()
            if not data:
                raise ValueError("镜像文件为空")
            if len(data) > FLASH_SIZE:
                raise ValueError("镜像超过 1MB，不适用于本手柄")
            on_log("镜像: %s (%s)" % (path, _fmt_size(len(data))))
            device = self._connect(on_log)
            try:
                on_log("擦除并写入…请勿拔线")
                device.write(0, data, progress=on_progress)
                on_log("回读校验…")
                ok, bad = device.verify(0, data, retries=1)
                if not ok:
                    raise RuntimeError("写入校验失败（%d 字节不一致），请重试或恢复备份" % len(bad))
                on_log("校验通过，正在重启手柄…")
                device.reset()
                return "刷写成功！\n手柄将重启为正常模式。"
            finally:
                device.close()

        self._run(title, action)

    def on_reset(self):
        def action(on_log, on_progress):
            device = self._connect(on_log)
            try:
                on_log("发送重启指令…")
                device.reset()
                return "手柄正在重启。"
            finally:
                device.close()

        self._run("退出手柄刷写模式", action)


def _fmt_size(num):
    for unit in ("B", "KB", "MB"):
        if num < 1024 or unit == "MB":
            return "%.1f %s" % (num, unit) if unit != "B" else "%d B" % num
        num /= 1024.0
    return str(num)


def main():
    init_console()
    root = tk.Tk()
    try:
        root.iconbitmap(default="")
    except Exception:
        pass
    FlashApp(root)
    root.mainloop()


if __name__ == "__main__":
    main()
