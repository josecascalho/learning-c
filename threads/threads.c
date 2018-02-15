#include <unistd.h>
#include <stdio.h>
#include <pthread.h>

int resultado=0;
void *dobro(void *numero);

int main(int argc, char* argv[])
{
	pthread_t tid;
	int x=4;

	pthread_create(&tid, NULL, dobro, (void *)&x);
	pthread_join(tid,NULL);
	printf("PID=%d. Dobro de x no main=%d\n",getpid(), resultado);
	return 0;	
}
void *dobro(void *numero)
{
	int *n = (int *) numero;

	resultado = *n * 2;
	sleep(10);
	printf("Valor do dobro na função=%d\n",resultado); 
}
