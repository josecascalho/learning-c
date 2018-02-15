#include <unistd.h>
#include <stdio.h>

int data_var =10;
int main(int argc,char *argv[])
{
   int stack_var = 20;
   pid_t child_pid;
   child_pid = fork();
 
  if (child_pid ==0)
   {
    int error = execlp("/home/jmc/C/multiplicar","multiplicar","4","67",0);
    perror("Error:");
  }

 else
  {//pai
    sleep(10);
    printf("Vou terminar o programa!\n");
  }
}
