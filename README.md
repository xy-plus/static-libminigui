# How to use

Contains 2 parts:

- static compile libminigui
- static compile minigui app

I assume you work in Linux, and have x86_64-linux-musl.

Or you can work in docker:

```shell
yourComputer$ git clone https://github.com/xy-plus/static-libminigui.git
yourComputer$ cd static-libminigui
yourComputer$ docker run -it --mount type=bind,source=$(pwd),destination=/mnt muslcc/x86_64:x86_64-linux-musl
docker$ cd mnt
```

## static compile libminigui

minigui is clone from https://github.com/VincentWei/minigui , to static complie it by musl, we should

- `src/kernel.sharedres.c`

```git
+ #include <fcntl.h>
```

- `src/misc/nposix.c`

```git
+ #include <sys/time.h>
```

- `src/newgal/fbcon/pci_smi.c`

```git
- #include <error.h>
```

## static compile minigui app

asdsaasd
