CC = g++
CCFLAGS = -Wall -std=c++11

LinkedListDemo: LinkedListDemo.o
	$(CC) $(CCFLAGS) LinkedListDemo.o -o LinkedListDemo

LinkedListDemo.o: LinkedListDemo.h
	$(CC) $(CCFLAGS) -c LinkedListDemo.cc

run:
	./LinkedListDemo

output:
	./LinkedListDemo > output.txt

clean:
	-rm *.o LinkedListDemo
