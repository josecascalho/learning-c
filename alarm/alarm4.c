#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handler(int signum){
  //struct sigaction action;
  //action.sa_handler = handler;
  printf("What's taking so long?\n");
  //sigaction(SIGALRM, &action, NULL);
  alarm(1);
}

int main(){

  char name[1024];

  struct sigaction action;
  action.sa_flags = SA_RESTART;
  action.sa_handler = handler;

  sigaction(SIGALRM, &action, NULL);

  alarm(1);

  printf("What is your name?\n");

  //scanf returns the number of items scanned
  if( scanf("%s", name) != 1){ 
    perror("scanf fail");
    exit(1);
  }

  printf("Hello %s!\n", name);

}
