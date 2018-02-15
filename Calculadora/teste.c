#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
  char *a[2],str1[12],str2[12];
  strcpy(str1,"Olá Mundo!");//guarda-se expressão em str1
  a[0] = str1;//Apontador 0 aponta para início de str1
  strcpy(str2,"Olá Açores!");//guarda-se expressão em str2
  a[1] = str2;//Apontador 1 aponta para início de str2
  printf("Endereço de str1→%x\n",a[0]);//Endereço
  printf("str1→%s\n",a[0]);//Imprime a string
  printf("Endereço de str2->%x\n",a[1]);//Endereço
  printf("str2→%s\n",a[1]);//Imprime segunda string
  for( int i=0;i<strlen(str2);i++)
  {
   putchar(*a[1]); //Imprime carater a carater
   a[1]++;
  }
  putchar('\n');
}
