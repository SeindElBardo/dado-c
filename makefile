all:
	gcc -c dado.c -o dado.o
	ar -rv libdado.a dado.o
	gcc -o roll roll.c libdado.a

roll:
	gcc -o roll roll.c libdado.a

dado:
	gcc -c dado.c -o dado.o
	ar -rv libdado.a dado.o
