#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/mman.h> //mmap
#include <fcntl.h> //O_CREAT, etc.
#include <semaphore.h>

int *partilha;
void cria_memoria_partilhada();
void destroi_memoria_partilhada();

