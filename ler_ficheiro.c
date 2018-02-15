#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>



void main(){

char buf[50];
int fd = open("teste.txt",O_RDONLY);
//printf("O descritor do ficheiro é:%d",fd);
if (fd > 0)
  {
    int r = read(fd,buf,50*sizeof(char));
    

    if ( r != 0) printf("O ficheiro foi lido: %s",buf);
  }
else{
  printf("Não encontrei o ficheiro!\n");
}
}
