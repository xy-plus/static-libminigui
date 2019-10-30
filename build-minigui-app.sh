cd minigui-samples/HelloWorld
gcc -o HelloWorld.out HelloWorld.c -lpthread -lminigui_ths -L../.. -I /usr/local/include/ -static
cp /usr/local/etc/MiniGUI.cfg ./ # MiniGUI.cfg and myapp.out should in the same dir
cd ../minesweeper
gcc -o minesweeper.out minesweeper.c -lpthread -lminigui_ths -L../.. -I /usr/local/include/ -static
cp /usr/local/etc/MiniGUI.cfg ./ # MiniGUI.cfg and myapp.out should in the same dir
