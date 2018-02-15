#include "ExemploEmC.h"



float distance(point pA, point pB)
{
  float dx = pA.x- pB.x;
  float dy = pA.y - pB.y;
  return sqrt(dx*dx + dy*dy);
}

void print_point(point p)
{
    printf("(%2.2f)(%2.2f)", p.x,p.y);  
}

void print_vector(point *ps){
  printf("--------------------------------------------\n");
  for(int i=0; i< NR_POINTS; i++) {    
        printf("%d-->", i);
	print_point(*ps);
	ps++;
	printf("\n");
  }
  printf("--------------------------------------------\n");
}



int main(int argc, char *argv[]){
  point Pt1, Pt2;
  float a, b;
  if ( argc != 1){
    printf("Deve introduzir número de pontos: ExemploEmC nr-pontos");
    exit(0);
  }
  else
  {
    int nr_pontos = atoi(argv[1]);
    if (nr_pontos > NR_OF_POINTS)
    {
      nr_pontos = NR_OF_POINTS;
    }
    for (int i=0;i<nr_pontos;i++)
    {
      printf("Introduz as coordenadas x y de um ponto:\n");  
      scanf ("%f %f", &a, &b);
      printf("\nAs coordenads introduzidas foram %f %f.\n",a,b);  
      point pt; 
      pt.x = a;
      pt.y = b;
      points[i] = pt; 
   }
  }
   }  
  printf("Todos os pontos:");
  print_vector(l1);
}


