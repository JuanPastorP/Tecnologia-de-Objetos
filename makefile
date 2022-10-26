all: arrayStack.o main.o
	g++ arrayStack.o main.o -o prueba1
arrayStack.o: arrayStack.cc arrayStack.h
	g++ -c arrayStack.cc
main.o: main.cc arrayStack.h
	g++ -c main.cc