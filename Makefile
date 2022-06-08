# Simple and stupid makefile

CC = g++
CFLAGS = -Wall -g -c
 
all:
	$(CC) $(CFLAGS) classes/Cos.cpp -o build/Cos.o
	$(CC) $(CFLAGS) classes/FuncMult.cpp -o build/FuncMult.o
	$(CC) $(CFLAGS) classes/FuncSum.cpp -o build/FuncSum.o
	$(CC) $(CFLAGS) classes/Function.cpp -o build/Function.o
	$(CC) $(CFLAGS) classes/LinearFunc.cpp -o build/LinearFunc.o
	$(CC) $(CFLAGS) classes/Sin.cpp -o build/Sin.o
	$(CC) $(CFLAGS) classes/Square.cpp -o build/Square.o

	$(CC) $(CFLAGS) main.cpp -o build/main.o
	$(CC) build/*.o -o build/work
	
	build/work