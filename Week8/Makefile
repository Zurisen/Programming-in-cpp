CC = g++
CFLAGS = -Wall -g
TARGETS = main.o shapes.o
FILES = shapes.h

main: $(TARGETS)
	$(CC) $(CFLAGS) -o main $(TARGETS)

main.o: main.cpp $(FILES)
	$(CC) $(CFLAGS) -c main.cpp

shapes.o: shapes.h
