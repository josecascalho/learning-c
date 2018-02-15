#include <stdio.h>
#include <math.h>
int sqr(int x)
{
  x=x*x;
  return x;
}
void main()
{
  int t=10;
  printf(" %d --> %d\n",t,sqr(t)) ;
  printf("Valor de t após ter chamado sqr:%d\n",t);
}
