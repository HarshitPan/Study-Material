all : calculator
calculator :  add.o sub.o mul.o div.o mod.o main.o
	gcc -o calculator add.o sub.o mul.o div.o mod.o main.o
add.o : add.c header.h
	gcc -c add.c -o add.o
sub.o : sub.c header.h
	gcc -c sub.c -o sub.o
mul.o : mul.c header.h
	gcc -c mul.c -o mul.o
div.o : div.c header.h
	gcc -c div.c -o div.o
mod.o : mod.c header.h
	gcc -c mod.c -o mod.o
main.o : main.c header.h
	gcc -c main.c -o main.o
clean :
	rm -f *.o calculator