#include <stdio.h>

int main(){

	int a = 100;
	int *pA = &a;

	printf("\'a\' is %d\n", a);
	printf("Address for \'a\' is %p\n", pA);
	printf("Value from pointer is %d\n", *pA);
	printf("Also, dereferenced pointer value is %d\n", *&a);

	return 0;

}
