#include <stdlib.h>
void func(){
  int *p;
  p= NULL;
 free(p);free(p);
}


void main(){
	func();
}
