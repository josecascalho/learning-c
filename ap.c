#include<stdio.h>

void main(){
  int x, y, *px;
  x = 23;
  printf("x =%d\n",x);
  px = &x;
  printf("px aponta para x *px=%d\n",*px);
  x = 235;
  printf("novo valor de x =%d\n",x);
  printf("px aponta para x *px=%d\n",*px);
  *px = 0;
  printf("novo novo valor de x =%d\n",x);
  
}
