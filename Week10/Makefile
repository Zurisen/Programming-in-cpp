CC = g++
CFLAGS = -Wall -g
TARGETS = main.o doubly-linked.o
FILES = doubly-linked.h

main: $(TARGETS)
	$(CC) $(CFLAGS) -o main $(TARGETS)

main.o: main.cpp $(FILES)
	$(CC) $(CFLAGS) -c main.cpp

shapes.o: doubly-linked.h
