#include <string.h>
#include <stdio.h>
int main()
{
int i=0;

char s[]="abobora";
char* p;
 p = &s[0];//P APONTA PARA O ENDEREÇO ONDE COMEÇA O VETOR s!
  printf("%c\n",s[0]);
  printf("%c\n",*p);
  printf("%c\n",s[1]);
  //p=&s[1];
  p++;//?
  printf("%c\n",*p);
  printf("%c\n",s[2]);
  p++;
  printf("%c\n",*p);
  printf("%c\n",s[3]);
  
  printf("%c\n",s[7]);
//while(t[i]=s[i])i++;
//printf("%s\n",t);
return 1;
}
