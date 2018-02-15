#include "mem.h"
#include <semaphore.h>
int main(int argc, char* argv[])
{
	int num_processos_filho, i, n;
	sem_t *sem;
	cria_memoria_partilhada();
	sem_unlink("/sem");
	sem = sem_open("/sem",O_CREAT | O_EXCL, O_RDWR, 1); /*mutex*/
	if ( sem == SEM_FAILED)
	{
		perror("sem_open");
		exit(1);
	}
	num_processos_filho = 3;
	for (i=0; i< num_processos_filho; i++)
	{
		switch(fork())
		{
			case -1: 
			  perror("fork");break;
			case 0: //filho
			  //sem_wait(sem);
			  n = *partilha;
			  sleep(i);
			  *partilha = n + 1;
			  //sem_post(sem);
			  return 0;
			  break;
			default:
			  printf("pid = %d. Filho %i foi criado. Vai inscrementar a variável partilhada!\n", getpid(),i);
			  break;
		}
	 }
	 for (i = 0; i < num_processos_filho; i++)
	 {
		wait(NULL);
	 }
	 printf("O valor final do recurso partilhado é: %d\n", *partilha);
	 destroi_memoria_partilhada();
	 return 0;
			
	
}
