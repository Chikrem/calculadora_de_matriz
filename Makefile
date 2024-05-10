main: menu.o vetor.o matriz.o
	gcc menu.o vetor.o matriz.o -o main
menu.o: menu.c
	gcc -c menu.c -o menu.o
vetor.o: vetor.c
	gcc -c vetor.c -o vetor.o
matriz.o: matriz.c
	gcc -c matriz.c -o matriz.o