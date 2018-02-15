#include <stdio.h>
#include <unistd.h>
int data_var = 1; /* variável global */
int main(int argc, char* argv[])
{
int stack_var = 20; /*variável a guardar na pilha */
pid_t child_pid; /* pid_t é um tipo que guarda o número do processo */
child_pid = fork(); /* passam a existir dois processos*/
if (child_pid == -1){
printf(“Erro ao criar filho!”);
return 0;
}
if (child_pid == 0){
   /* Código só executado pelo processo filho */
   stack_var = 200;
   data_var = 100;
   sleep(10);
   pid_t neto_pid;
   neto_pid = fork();
}
else
{
/* Código só executado pelo processo pai */
sleep(10);
}
/* Ambos executam este código */
printf("Sou o %s. Tenho o PID=%d.\n",(child_pid==0)?”filho”:”pai”, getpid());
printf(“O valor das variáveis stack_var (local: %u) e data_var (local: %u) são: %d e %d,
re
