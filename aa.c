#include <stdio.h>

void main(){
  int i, *p, **q;
  
  i=124;
  p=&i;
  q=&p;
  printf("i=%d\n",i);
  printf("*p=%d\n",*p);
  printf("**q=%d\n",**q);
  
}
//PERGUNTAS PARA TPC...
//E se eu fizer: q=p ?
//E se eu fizer *p=i ? 
