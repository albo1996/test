all: main.o age.o
	gcc main.o age.o -o main
main.o: main.c
	gcc -c main.c
age.o: age.c
	gcc -c age.c
clear:
	rm main
	rm *.o
	clear
