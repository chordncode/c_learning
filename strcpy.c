#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void){

	char str[50] = "Hello My Friend";
	char strCpy[50];
	char strnCpy[50];

	printf("Original : %s\n", str);

	strcpy(strCpy, str);
	strncpy(strnCpy, strCpy, 5);

	printf("strcpy : %s\n", strCpy);
	printf("strncpy : %s\n", strnCpy);
	
	return 0;

}
