myprog.exe : main.o node.o binarytree.o
	gcc main.o node.o binarytree.o -o myprog.exe

main.o : main.c node.h binarytree.h node.c binarytree.c
	gcc -Wall -c main.c

binarytree.o : binarytree.c binarytree.h node.h node.c
	gcc -Wall -c binarytree.c

node.o : node.c node.h
	gcc -Wall -c node.c

clean: 
	rm *.o myprog.exe 
	ls
