#include <stdio.h>

int main(){

	int a = 100;
	int *pA = &a;

	printf("\'a\' is %d\n", a);
	printf("Address for \'a\' is %p\n", pA);
	printf("Dereferenced Pointer Value is %d\n", *pA);
	printf("Also, Dereferenced Pointer Value is %d\n", *&a);

	return 0;

}
