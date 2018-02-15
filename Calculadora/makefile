CC=gcc
CFLAGS=-I.
LIBS = -lm


calculadora2: calculadora2.o divisao.o
	$(CC) -o calculadora2 calculadora2.o  $(CFLAGS) $(LIBS)

calculadora2.o: calculadora2.c
	$(CC) -c -o calculadora2.o calculadora2.c $(CFLAGS) $(LIBS)


.PHONY: clean

clean:
	rm calculadora2 calculadora2.o divisao.o

