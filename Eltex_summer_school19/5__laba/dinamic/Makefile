rezult111 : 5_laba.o vela 
	gcc   55_laba.o  -L. -libopers -o rez555 -lm
	LD_LIBRARY_PATH=$(pwd)
	export LD_LIBRARY_PATH
5_laba.o :
	gcc -c 55_laba.c
vela : f1.o
	gcc -shared -o lopers.so del.o pro.o
f1.o :
	gcc -c -fPIC del.c pro.c
clean :
	rm  55_laba.o del.o pro.o libopers.so rez555
