# How to use

Contains 2 parts:

- static compile libminigui
- static compile minigui app

I assume you work in Alpine-Linux, and use x86_64-linux-musl as default toolchain. If you want build other platform minigui-app, read the x86_64 step first, then read the cross-complie method in the bottom.

You can work in docker:

```shell
yourComputer$ git clone https://github.com/xy-plus/static-libminigui.git
yourComputer$ cd static-libminigui
yourComputer$ docker run -it --mount type=bind,source=$(pwd),destination=/mnt muslcc/x86_64:x86_64-linux-musl
docker$ cd mnt
```

## static compile libminigui

### modify files

minigui is clone from https://github.com/VincentWei/minigui , to static complie it by musl, we should make a little changes to the files.

I already copy it to my repo and change some files, If you want to clone it from official GitHub repo, please change the files below by yourself.

- `minigui/src/kernel/sharedres.c`

```diff
+ #include <fcntl.h>
```

- `minigui/src/misc/nposix.c`

```diff
+ #include <sys/time.h>
```

- `minigui/src/newgal/fbcon/pci_smi.c`

```diff
- #include <error.h>
```

### setup environment

```sh
apk add make
apk add autoconf
apk add automake
apk add pkgconf
```

### compile library

```sh
./build-libminigui.sh
```

`build-libminigui.sh` is edited for [rCore(a tiny linux like OS)](https://github.com/rcore-os/rCore) , you can run `./minigui/configure --help` to check what I did, and modify it by yourself.

## static compile minigui app

```sh
./build-minigui-app.sh
```

## run app on rCore

### modify configure

- `MiniGUI.cfg`

```diff
[system]
# GAL engine and default options
- gal_engine=pc_xvfb
- defaultmode=800x600-16bpp
+ gal_engine=fbcon

# IAL engine
- ial_engine=pc_xvfb
- mdev=/dev/input/mice
- mtype=IMPS2
+ ial_engine=console
+ mdev=none
+ mtype=none

[fbcon]
- defaultmode=1024x768-16bpp
+ defaultmode=1024x768-32bpp

- respath=/usr/local/share/minigui/res/
+ respath=/usr/local/share/minigui/res
```

### place resourse

- get minigui-res

You can run command to get it, or download it from http://www.minigui.com/downloads/4.0.0/minigui-res-4.0.0.tar.gz .

```sh
git clone https://github.com/VincentWei/minigui-res.git
cd minigui-res
./autogen.sh
./configure
make -j
make install # you res is placed to /usr/local/share/minigui/res
cd ..
```

- place minigui-res

```
git clone https://github.com/rcore-os/rCore.git --recursive
cd rCore/user
make sfsimg arch=x86_64
cp /minigui-res_path/res  ./build/x86_64/usr/local/share/minigui/
```

- place app

```sh
cp minigui-samples/HelloWorld/MiniGUI.cfg rCore/user/build/x86_64/ # MiniGUI.cfg and myapp.out should in the same dir
cp minigui-samples/HelloWorld/HelloWorld.out rCore/user/build/x86_64/
cp minigui-samples/minesweeper/minesweeper.out rCore/user/build/x86_64/
cp minigui-samples/minesweeper/res rCore/user/build/x86_64/
make sfsimg arch=x86_64
```

### run app

```sh
cd rCore/kernel
make run arch=x86_64 graphic=on
rCore$ ./HelloWorld
rCore$ ./minesweeper # minigui-samples/minesweeper/res and minesweeper.out should in the same dir
```

## cross-compile

### fix minigui's bug

There are some bug in minigui, We report it to minigui, but till now our pull request hasn't been accept. If you use the minigui download from it officail GitHub, maybe you should make this change to better support arm and riscv:

```diff
// in minigui/include/common.h

    (defined(__alpha__) || defined(__alpha)) || \
-   defined(__arm__) || \
+   defined(__arm__) || defined(__aarch64__) || \
    defined(__riscv_xlen) || \
    (defined(__CC_ARM) && !defined(__BIG_ENDIAN)) || \
    (defined(__mips__) && defined(__MIPSEL__)) || \
    defined(__LITTLE_ENDIAN__) || \
```

### select plantform

- docker

```shell
docker run -it --mount type=bind,source=$(pwd),destination=/mnt muslcc/x86_64:{x86_64, aarch64, riscv64}-linux-musl
```

- `build-libminigui.sh`

```diff
./configure \
+   --host=riscv64-linux-musl \
    --disable-complexscripts \
```
