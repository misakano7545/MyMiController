# AGENTS.md

本文件为在本仓库工作的贡献者（包括自动化代理）约定 **提交信息格式** 与
**发行版本格式**。两者均参照参考仓库
[misakano7545/workbuddy2api-panel](https://github.com/misakano7545/workbuddy2api-panel)
的既有实践。

---

## 一、Commit 规范

### 1.1 标题格式

```
<type>(<scope>): <中文描述>
```

- **type** 取值（与参考仓库一致）：

  | type | 含义 |
  |------|------|
  | `feat` | 新功能 |
  | `fix` | 修复缺陷 |
  | `style` | 纯格式/风格调整（不改行为） |
  | `chore` | 杂项（清理、迁移、依赖调整等） |
  | `refactor` | 重构（不新增功能、不修缺陷） |
  | `test` | 测试相关 |
  | `docs` | 文档相关 |
  | `perf` | 性能优化 |
  | `ci` | CI/工作流相关 |

- **scope** 可选，用括号标注改动模块。本仓库常用 scope：
  `gui`、`device`、`crypto`、`jlfw`、`image`、`cli`、`transport`、
  `docs`、`ci`、`tools`、`firmware`。
- **中文描述**：概要写「做了什么 + 为什么/影响」，而不是英文短句。
  需要时用破折号 `——` 承接补充说明（参考仓库常见写法）。
- 单个提交一个主题；标题不写句号，尽量不超过约 50 个汉字。

### 1.2 正文格式

- 标题与正文之间空一行，正文使用中文；
- 用 `- ` 无序列表分点，说明：改动细节、边界条件、实测结果；
- 修复类提交建议写明：**现象 → 根因 → 修复方式 → 验证结果**；
- 涉及测试时注明测试文件与通过情况；
- 示例（本仓库真实提交）：

```
feat(gui): 新增「检测手柄连接状态」为第一步——六步流程 + 三态检测

- gui: 菜单重排为六步，新增「1. 检测手柄连接状态」，原备份/刷入/恢复/
  自选/重启顺延为 2~6；窗口顶部新增「当前状态」实时指示
- device: 新增 list_bootloader_disks()（免管理员枚举刷写设备）与
  find_normal_mode_gamepads()（检测正常模式 Xbox 手柄）
- docs: README 与开发/刷写文档同步为六步编号
- 验证: python tests/run_tests.py 10/10 通过；GUI 冒烟测试通过
```

### 1.3 参考实例（取自参考仓库）

- `feat(server): 上游截断自动续写——同账号同模型拼成一条连续流（方案 A）`
- `fix(panel): 用量页图例去重——#87 合并遗留两套图例，合并为一组并给均值虚纹色块`
- `fix(usage): Rollup 折叠时积分被重复累加（合入 #69 时漏删的一行）`
- `chore(upstream): PR #57 新测试文件按仓库规则迁入 sse_test.go`
- `style: gofmt continue.go`

### 1.4 提交前自查

1. 运行测试：`python tests/run_tests.py`（应全绿）；
2. GUI 改动额外做启动冒烟（窗口能打开、不报错）；
3. 固件/镜像相关改动跑一遍 `git status` 检查是否误带大文件变更。

---

## 二、发行版本（Release）格式

参照参考仓库的发布节奏与命名：

### 2.1 版本号（Git Tag）

```
v<YYYY.M.D>.<HHMM>
```

- 格式为 `v` + 日期 + 发版时刻（24 小时制，时分，分钟精度）；
- 日期与时间不补零。例如：
  - `v2026.10.2.842`   → 2026-10-02 08:42
  - `v2026.10.2.1041`  → 2026-10-02 10:41
  - `v2026.9.30.135`   → 2026-09-30 01:35

### 2.2 发布方式

1. 在 `main` 上完成并推送提交；
2. 打 tag 并推送：

   ```bash
   git tag v2026.10.2.1041
   git push origin v2026.10.2.1041
   ```

3. `.github/workflows/release.yml` 自动触发：跑测试 → 构建 Windows
   单文件 GUI → 打包为 zip → 创建 Release 并上传产物。

### 2.3 Release 名称与正文

- **名称**：与 tag 一致（如 `v2026.10.2.1041`）；
- **正文**：由 GitHub 自动生成（`generate_release_notes: true`），
  首行为 `**Full Changelog**: <compare 链接>`，与参考仓库相同。

### 2.4 产物命名

```
MyMiController-<版本>-windows-amd64.zip
```

- `<版本>` 为 tag 去掉 `v` 前缀，例如
  `MyMiController-2026.10.2.1041-windows-amd64.zip`；
- zip 内为单文件 `MyMiController.exe`（GUI，免安装 Python）。

### 2.5 版本节奏

- 每次面向用户的功能/修复合并后即可发一版（与参考仓库一致，
  一日多版也正常）；
- 仅内部重构/文档改动可不发版。

---

## 三、仓库速览（供代理快速定位）

| 路径 | 说明 |
|------|------|
| `gui/flasher.py` | tkinter GUI（六步菜单：检测/备份/刷入/恢复/自选/重启） |
| `mico/` | 零依赖核心库：transport（SCSI 传输）、device（BR23 引导与闪存读写）、crypto（杰理算法）、jlfw（.fw/.ufw 解析）、image（镜像布局）、cli（命令行） |
| `firmware/` | 固件镜像与设备记录（发布物，勿随意改动） |
| `firmware/parts/` | 出厂固件的可编辑「零件」（app.bin 等，改这里） |
| `decompiled/` | Ghidra 反编译产物、导出脚本与函数总表（functions.csv） |
| `docs/` | 逆向、刷写模式、闪存布局、二次开发文档 |
| `patches/` | 固件补丁脚本（`patch(ctx)`，见 build_firmware.py） |
| `tools/` | build_firmware / build_image / unpack_fw / build_exe |
| `tests/` | 单元测试（无需 pytest，`python tests/run_tests.py`） |

**固件构建红线**：不修改零件时 `python tools/build_firmware.py` 的产物
必须与 `firmware/G5605_boot_code.bin` **逐字节一致**（SHA256
`FBDA6EE6…`）。CI 与本地都强制执行这条黄金校验；任何打破它的改动都
视为破坏性变更。

## 四、常用命令

```bash
python tests/run_tests.py            # 全部测试
python -m mico info                  # 检测刷写模式设备
python -m mico backup out.bin        # 备份
python -m mico flash image.bin -y    # 刷入（含回读校验）
python -m mico reset                 # 手柄重启回正常模式
python tools/build_image.py --help   # 构建镜像（旧式手工路径）
python tools/unpack_fw.py --help     # 解包固件容器
python tools/build_firmware.py --verify-only              # 校验零件==出厂镜像
python tools/build_firmware.py --patch patches/example-hello.py --out build/x.bin
```

**发布固件 BIN 时**：release.yml 会随刷机工具一并上传
`MyMiController-<版本>-firmware-stock.bin` 与
`MyMiController-<版本>-firmware-vibe-coding.bin`，命名规则同 2.4 节。
上架的 vibe-coding BIN 为 `0x53000` 小镜像（只覆盖固件区，`0xF6000`
起的校准/设置区不受影响）；需要 1MB 全片镜像时，用
`tools/build_firmware.py --full --settings <本机备份>` 自行合并设置区。
