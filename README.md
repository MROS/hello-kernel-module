# 最簡核心模組範例

## 編譯

``` sh
git clone https://github.com/MROS/hello-kernel-module
cd hello-kernel-module
make
```

此時會在當前目錄生成 hello.ko

## 載入、移除
``` sh
sudo insmod hello.ko   # 載入
dmesg | tail           # 觀察 log
sudo rmmod hello.ko    # 移除
dmesg | tail           # 觀察 log
```


## 問題

Q: 請解釋 Makefile

A: [Building External Modules](https://www.kernel.org/doc/Documentation/kbuild/modules.txt)
