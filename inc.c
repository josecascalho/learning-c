#include "mem.h"
int main(int argc, char* argv[])
{
  int num_processos_filhos,i,n;
  sem_t *sem;
  cria_memoria_partilhada();
  sem_unlink("/sem");
  sem = sem_open("/sem", O_CREAT | O_EXCL, O_RDWR, 1); /* mutex: valor inicial do semáforo é 1 */
  if (sem == SEM_FAILED) 
  {
    perror("sem_open");
    exit(1);
  }
  num_processos_filhos = 3;
  for (i=0; i<num_processos_filhos;i++)
  {
    switch(fork())
    {
	case -1: 
		perror("fork");break;
	case 0: //filho
            sem_wait(sem);
		n=*partilha;
		sleep(1);
		*partilha = n +1;
            sem_post(sem);
		return 0;
		break;
	default: 
		printf("pid= %d. Filho %i foi criado. Vai incrementar variável partilhada!\n", getpid(),i); 
		break; 
    }
 
  }
  for (i=0; i< num_processos_filhos;i++)
  {
	wait(NULL);
  }
  printf("Valor final do recurso partilhado: %d\n", *partilha);
  destroi_memoria_partilhada();
  return 0;	
}
