rezultdyn : libopera.so
	gcc main.c -o main -ldl 
libopera.so: opera.o
	gcc -shared opera.o -o libopera.so -lm
opera.o:
	gcc -fPIC -c opera.c
clean: 
	rm libopera.so opera.o main