#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	int *p;
	p = &x;
	scanf("%d",&x);
//	x = 4;
	printf("O valor inteiro lido é: %d ? \n", *p); 
}
