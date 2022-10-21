
CFLAGS=-Wall -Wextra -pedantic -std=c11

Fase1: main.o parse.o HashTables_for_names.o
	gcc $(CFLAGS) $^ -o Fase1 -lm
	rm main.o parse.o HashTables_for_names.o

main.o: main.c
	gcc $(CFLAGS) -c $^

parse.o : parse.c
	gcc $(CFLAGS) -c $^ 

HashTables_for_names.o : HashTables_for_names.c
	gcc $(CFLAGS) -c $^