# ICS2023 Programming Assignment

This project is the programming assignment of the class ICS(Introduction to Computer System)
in Department of Computer Science and Technology, Nanjing University.

For the guide of this programming assignment,
refer to https://nju-projectn.github.io/ics-pa-gitbook/ics2023/

To initialize, run
```bash
bash init.sh subproject-name
```
See `init.sh` for more details.

The following subprojects/components are included. Some of them are not fully implemented.
* [NEMU](https://github.com/NJU-ProjectN/nemu)
* [Abstract-Machine](https://github.com/NJU-ProjectN/abstract-machine)
* [Nanos-lite](https://github.com/NJU-ProjectN/nanos-lite)
* [Navy-apps](https://github.com/NJU-ProjectN/navy-apps)






ics2023
├── abstract-machine   # 抽象计算机
├── am-kernels         # 基于抽象计算机开发的应用程序
├── fceux-am           # 红白机模拟器
├── init.sh            # 初始化脚本
├── Makefile           # 用于工程打包提交
├── nemu               # NEMU
└── README.md


按键测试程序:
cd am-kernels/tests/am-tests
make ARCH=native mainargs=k run


红白机游戏运行
运行方式
将游戏ROM放置在nes/rom/目录下, 并命名为xxx.nes, 如nes/rom/mario.nes. 然后可通过mainargs选择运行的游戏, 如:
make ARCH=native run mainargs=mario
操作方式
U — SELECT
I — START
J — A键
K — B键
W/S/A/D — UP/DOWN/LEFT/RIGHT
Q — 退出





make submit
下载提交代码失败submit.sh
    git gc
    枚举对象中: 451, 完成.
    对象计数中: 100% (451/451), 完成.
    使用 16 个线程进行压缩
    压缩对象中: 100% (398/398), 完成.
    写入对象中: 100% (451/451), 完成.
    总共 451（差异 117），复用 76（差异 35），包复用 0
    STUID=221226037 STUNAME=赵琦 bash -c "$(curl -s http://why.ink:8080/static/submit.sh)"
    [FAIL ✗] invalid token=""


wget http://jyywiki.cn/pages/ICS/2020/demos/yemu.tar.gz

















