@echo off
chcp 65001 >nul
title MyMiController - 小米手柄刷写工具
where python >nul 2>nul
if errorlevel 1 (
    echo 没有找到 Python，请先安装 Python 3.9 或更新版本。
    echo 下载: https://www.python.org/downloads/
    pause
    exit /b 1
)
powershell -NoProfile -ExecutionPolicy Bypass -Command "Start-Process python -ArgumentList '%~dp0MyMiController.py' -Verb RunAs"
exit /b 0
