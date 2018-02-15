#include <stdio.h>
#include <stdlib.h>
#define VALOR 10000
void main(){
  int i=1;  
  int *p;
  while (i > 0)
  {

    p=(int*)malloc(VALOR*sizeof(int));    
    printf("Endereço:%p\n",p);
    p=NULL;
  }  
}

