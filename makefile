#This is my first home rolled make file. How cool!


## compiler to use:
CC = g++

##Flags to set

CFLAGS = -c -Wall

all:test

test: main.o
	$(CC) main.o -o main.exe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *o test
