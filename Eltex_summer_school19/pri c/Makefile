rezult111 : 5_laba.o vela lib
	gcc 5_laba.o -L. -lvela -o rezult222
5_laba.o :
	gcc -c 5_laba.c
vela : pro.o del.o
	ar rc libvela.a del.o pro.o
lib :
	ranlib libvela.a
f1.o :
	gcc -c  del.c pro.c
clean :
	rm  5_laba.o del.o pro.o libvela.a rezult222
