# NCUSCC2026 考核作答

南昌大学 NCUSCC2026 招新考核的作答仓库。

- **姓名**：胡绍杭
- **学号**：9110126060
- **方向**：C++
- **考核时间**：2026年10月8日 20:00 — 10月16日 12:00

## 已完成题目

| 关卡 | 题目 | 我的做法 |
| --- | --- | --- |
| linux-foundations 第1关 | 找到入口 | `find` 在子目录中定位材料，按 `exam --help` 调用，`cp` 原样搬运结果 |
| linux-foundations 第2关 | 两段信号 | `find` + `grep` 挑出唯一密钥，A 段结果先搬走再处理 B，`cat` 顺序拼接 |
| linux-foundations 第3关 | 读日志并修复输入 | 看日志定位长度要求，`head -c` + `printf` 在结尾换行前补最少空格 |
| git-foundation | Git 就在本地 | `git init -b main`，零提交、零暂存 |
| cpp-build-run | 读数统计 | C 语言一次遍历，min/max 用第一个读数初始化（不用 0），`diff` 逐字节对样例 |
| cpp-program-structure | 设备巡检记录 | 类型名映射成数组下标，一次映射同时满足顺序/补零/并列取前，O(n) |

## 目录结构

```
NCUSCC2026-/
├── README.md                          本文件（仓库首页显示的内容）
├── linux-foundations/                 基础：Linux 三关（产出 flag，无源码）
│   ├── 01-找到入口.md
│   ├── 02-两段信号.md
│   └── 03-读日志并修复输入.md
├── git-foundation/                    基础：Git 就在本地（无源码）
│   └── 题解.md
├── cpp-build-run/                     C/C++ 方向：读数统计
│   ├── main.c                         C 语言实现（提交入口）
│   └── 题解.md
├── cpp-program-structure/             C/C++ 方向：设备巡检记录
│   ├── main.c                         C 语言实现（提交入口）
│   └── 题解.md
└── 报告/
    ├── 技术报告.md                    各题的做法、思路与优化
    └── 感悟报告.md                    解题过程中遇到的问题与心路历程
```

## 怎么编译运行

以 `cpp-build-run` 为例（C 语言）：

```bash
cd cpp-build-run
gcc -std=c11 -Wall -Wextra -o main main.c
./main < samples/01-mixed.in
```

评测环境使用固定命令构建：C 源码用 `gcc -std=c11`，C++ 源码用 `g++ -std=c++17`（不带告警开关）。

## 环境

- 编译命令：`gcc -std=c11 -Wall -Wextra` / `g++ -std=c++17 -Wall -Wextra`
- 运行平台：NCUSCC 考核平台提供的 Linux 容器
- 本地验证：WSL2 Ubuntu + gcc 15.2.0（与评测使用相同的编译命令）

## 说明

每道题的详细思路、实现要点和踩坑记录写在对应目录的 `题解.md` 里；完整分析见 `报告/技术报告.md`。
