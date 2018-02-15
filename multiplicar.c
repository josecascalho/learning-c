#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int c;
        int a;
        int b;
        char* ptr;
	if ( argc < 3)
	{
	printf("Tem de introduzir dois parâmetros!\n");
	}
	else
{	
	a = strtol(argv[1],&ptr,10);
	b= strtol(argv[2],&ptr,10);
	c = a*b;	
	printf("O resultado é:%d\n",c);

}
}
