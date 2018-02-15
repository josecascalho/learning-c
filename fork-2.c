#include <stdio.h>
#include <unistd.h>
/*data var: 1 = pai; 2 = filho; 3 = neto!*/
int data_var = 1;

int main(int argc, char* argv[])
{
	int status;
	int stack_var = 20;
	pid_t child_pid;
	pid_t gchild_pid;

	child_pid = fork();
	if (child_pid == -1){
 		printf("Erro ao criar filho!");	
	return 0;
	}
	if (child_pid == 0){
		stack_var = 200;
		data_var = 2;
		sleep(10);
	
	}
	else
	{//pai
		printf("Sou o pai e espero pelo filho!\n");
		system("ps -H");/* Executa comando ps -H e retorna valor no ecrã */		
		wait(&status);
		printf("Filho terminou tarefa!\n");
	}
	//pai, filho:
	if (data_var == 1){
	  printf("Sou o pai. PID =%d. Stack_var=%d.\n",getpid(),stack_var);
	}
	if (data_var == 2){
	  printf("Sou o filho. PID =%d. Stack_var=%d.\n",getpid(),stack_var);
	}
}
