cd minigui
./autogen.sh
./configure \
    --disable-complexscripts \
    --with-targetname=fbcon \
    --with-runmode=ths \
    --disable-cursor \
    --enable-videofbcon=yes \
    --enable-consoleial=yes
make -j
make install
cd ..
cp minigui/src/.libs/libminigui_ths.a ./
