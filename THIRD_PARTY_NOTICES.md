# 第三方组件声明

本仓库包含/参考了以下第三方项目。感谢原作者的工作。

## kagaimiq/jl-uboot-tool

- 用途：杰理 (JieLi) 芯片 UBOOT 协议、SCSI 命令集、RAM loader 的参考实现。
- 许可以及版权：
  MIT License, Copyright (c) 2023 Andrey Grigoryev (kagaimiq)
- 本仓库的使用方式：`mico/transport.py`、`mico/device.py` 中的协议常量与
  流程参考该实现重新编写（纯 Python、零依赖）；`mico/data/br23loader.bin`
  取自该项目 data 目录（MIT 许可范围内）。
- 来源：https://github.com/kagaimiq/jl-uboot-tool

## kagaimiq/jl-misctools

- 用途：.fw/.ufw 固件容器格式与杰理固件加密算法（ENC/SFC/CRC/MengLi）。
- 许可以及版权：
  MIT License, Copyright (c) Andrey Grigoryev (kagaimiq)
- 本仓库的使用方式：`mico/jlfw.py`、`mico/crypto.py` 参考其算法重新实现。
- 来源：https://github.com/kagaimiq/jl-misctools

## misakano7545/ghidra-jieli

- 用途：Ghidra 处理器的杰理 pi32v2 指令集支持（反编译本固件的基础）。
- Apache License 2.0。
- 来源：https://github.com/misakano7545/ghidra-jieli

## 小米游戏手柄固件

- 固件二进制版权归小米/原厂所有。
- 本仓库中的固件镜像仅用于**用户自有设备**的备份、恢复与研究用途。
- 如权利人提出异议，我们将立即移除相关内容。

---

上列 MIT 组件要求保留版权声明。以上声明即构成相应版权声明的保留。
完整许可证文本见各上游项目仓库。