#include <stdio.h>
#include <unistd.h>

int data_var = 1;

int main(int argc, char* argv[])
{
	int status;
	int stack_var = 20;
	pid_t child_pid;
	pid_t gchild_pid;
	gchild_pid = -1;
	child_pid = fork();
	if (child_pid == -1){
 		printf("Erro ao criar filho!");	
	return 0;
	}
	if (child_pid == 0){
		stack_var = 200;
		data_var = 100;
		sleep(10);
		gchild_pid = fork();
		if (gchild_pid == -1){
 			printf("Erro ao criar neto!");	
		return 0;
		}	
		if (gchild_pid == 0){
		  stack_var = 300;
		  data_var = 200;
		  sleep(10);
		}
		else{//filho
		printf("Sou o filho e espero pelo neto!\n");
		printf("");
			wait(&status);
		}
	
	}
	else
	{//pai
		printf("Sou o pai e espero pelo filho!\n");
		printf("");
		wait(&status);
	}
	//pai, filho e neto:
	if ((gchild_pid == -1) && (child_pid != 0)){
	  printf("Sou o pai. PID =%d. Stack_var=%d Data_var=%d.",getpid(),stack_var,data_var);
	}
	if (gchild_pid == 0) {
	  printf("Sou o neto. PID =%d. Stack_var=%d Data_var=%d.",getpid(),stack_var,data_var);
	}
	if ((gchild_pid !=  0) && (child_pid == 0)){
	  printf("Sou o filho. PID =%d. Stack_var=%d Data_var=%d.",getpid(),stack_var,data_var);
	}
}
