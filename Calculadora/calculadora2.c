#include "calculadora2.h"
float soma(float x, float y){
  return x+y;
}
float subtracao(float x, float y){
  return x-y;
}
float multiplicacao(float x,float y){
 return x*y;
}

int main(int argc, char *argv[]){
    //printf("My process ID : %d\n", getpid());
    float a,b;
    float res;
    if (argc <= 3){
      printf("Deve indicar que operacao vai realizar :+,-,/ ou x, seguida de dois numeros reais.");
      /* Atenção: Falta incluir o caso da raiz quadrada raiz 'número real' */
    }
    else
    {
//        printf("O valor do argv:%s\n",argv[1]);
        if (strcmp("+",argv[1]) == 0){
          a = atof(argv[2]);
          b = atof(argv[3]);
          res = soma(a,b);
        printf("O resultado da soma:%2.2f\n",res);
      }
      if (strcmp("/",argv[1]) == 0){
        a = atof(argv[2]);
        b = atof(argv[3]);
        res = divisao(a,b);
        printf("O resultado da divisao:%2.2f\n",res);	
      }
        if (strcmp("x",argv[1]) == 0){
          a = atof(argv[2]);
          b = atof(argv[3]);
          res =  multiplicacao(a,b);
          printf("O resultado da multiplicacao:%2.2f\n",res);
      }
   }
}
