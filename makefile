#build
EXE: main.o Racional.o
	g++ main.o Racional.o -o EXE -lncurses

#main
main.o: main.cpp Racional.h
	g++ -c main.cpp      

#Racional
Racional.o:  Racional.cpp Racional.h  
	g++ -c Racional.cpp
