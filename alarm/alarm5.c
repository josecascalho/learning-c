#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handler(int signum){
  printf("Alarm\n");
  alarm(2);
}

int main(){

  struct sigaction action;
  action.sa_handler = handler;
  action.sa_flags = SA_RESTART; //<-- restart 

  sigaction(SIGALRM, &action, NULL);


  //alarm in 1 second
  alarm(0);

  //meanwhile sleep for 2 seconds
  sleep(10);
//  for (long int i=1;i<1000000;i++){printf("\r%7d",i);};

  //how long does the program run for?

}
