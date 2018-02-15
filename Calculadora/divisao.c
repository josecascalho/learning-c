#include "divisao.h"
float divisao(float x, float y){
  if (y != 0)
    return x / y;
  printf("Erro: Divisão por zero!");
  exit(-1);     
}

