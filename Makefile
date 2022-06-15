# Simple and stupid makefile
CC = g++
CFLAGS = -Wall -g -c

all:
	$(CC) $(CFLAGS) main.cpp -o build/main.o
	$(CC) $(CFLAGS) Linear.cpp -o build/Linear.o
	$(CC) $(CFLAGS) Power.cpp -o build/Power.o
	$(CC) $(CFLAGS) Sin.cpp -o build/Sin.o
	$(CC) $(CFLAGS) Cos.cpp -o build/Cos.o
	$(CC) $(CFLAGS) Oper.cpp -o build/Oper.o
	$(CC) build/Linear.o build/Power.o build/Sin.o build/Cos.o \
		  build/main.o build/Oper.o -o build/cwork
run:
	build/cwork
clear:
	rm build/*
