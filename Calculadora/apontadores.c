#include <stdio.h>
int main()
{
  int x,*px,**pz;
  x=1;
  px=&x;
  int ***pt;
  pz = &px;
  pt = &pz;
  printf("***pt=%d\n",***pt);
  printf("x= %d\n",x);
  printf("&x= %u\n",&x);

  printf("px= %u\n",px);
  printf("*px+1= %d\n",*px+1);
  printf("px= %u\n",px);
  printf("*px= %d\n",*px);
  printf("*px+=1= %d\n",*px+=1);
  printf("px= %u\n",px);
  printf("(*px)++= %d\n",(*px)++);
  printf("px= %u\n",px);
  printf("*(px++)= %d\n",*(px++));
  printf("px= %u\n",px);
  printf("*px++-= %d\n",*px++);
  printf("px= %u\n",px);
  return 1;
}
