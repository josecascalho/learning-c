#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void elimina_vetor(char* str)
{
  free(str);
}
char* cria_vetor(int comprimento)
{
  //str = new char[comprimento + 1]; //em C++
  char* str = (char*) malloc((comprimento+1)*sizeof(char));
  //delete str; //em C++
  return str;
}
void main(){
  char *p,*q;
  p = cria_vetor(30);
  q = p;
  strcpy(p,"Isto é uma string");
  printf("A string:%s\n",p);
  p++;
  printf("A string novamente:%s\n",p);
  elimina_vetor(q);
  p=NULL;
  printf("A string novamente:%s\n",p);

}
