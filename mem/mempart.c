#include "mem.h"

int main(int argc, char* argv[])
{
	pid_t pid;
	int* num;
	//printf("Variável de partilha antes da execução do programa: %d\n",*partilha);
	cria_memoria_partilhada();

	*partilha = 100;
	printf("Sou o pai com PID = %d. Envio mensagem para o filho: %d\n",getpid(),*partilha);
	pid = fork();
	if (pid == 0)
	{//filho
		printf("Sou o filho com PID = %d. Vou ver a mensagem do pai. Ela é %d!\n",getpid(),*partilha);
		*partilha = 500;		
		printf("Sou o filho com PID = %d. Vou enviar msg ao pai. Ela é %d!\n",getpid(),*partilha);
	}
	else
	{//pai
		wait(num); /* espera pelo filho */
		printf("Sou o pai com PID = %d. Vou receber a mensagem do filho: %d \n", getpid(), *partilha);
		destroi_memoria_partilhada();
	}	
}
