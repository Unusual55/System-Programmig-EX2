all: connections

connections: main.o lib_my_mat.a
	gcc -g -Wall main.o lib_my_mat.a -o connections

lib_my_mat.a: my_mat.o
	ar -rcs lib_my_mat.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -g -Wall -c my_mat.c

main.o: main.c my_mat.c my_mat.h
	gcc -g -Wall -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.so lib_my_mat.a connections