# NCUSCC2026 考核作答

南昌大学 NCUSCC2026 招新考核的作答仓库。

- **姓名**：胡绍杭
- **学号**：9110126060
- **方向**：C++

## 已完成题目

| 关卡 | 题目 | 
| --- | --- | 
| linux-foundations 第1关 | 找到入口 |
| linux-foundations 第2关 | 两段信号 | 
| linux-foundations 第3关 | 读日志并修复输入 |
| cpp-build-run | 读数统计 | 
| cpp-program-structure | 设备巡检记录 |
| git-foundation | Git 就在本地 | 

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
│   ├── main.c                         C 语言实现
│   └── 题解.md
├── cpp-program-structure/             C/C++ 方向：设备巡检记录
│   ├── main.c                         C 语言实现
│   └── 题解.md
└── 报告/
    ├── 技术报告.md                    各题的做法、思路与优化
    └── 感悟报告.md                    解题过程中遇到的问题与心路历程
```
## 怎么编译运行

```bash
gcc -std=c11 -Wall -Wextra -o main main.c
./main < samples/01-mixed.in
