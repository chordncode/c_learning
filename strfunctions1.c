#include <stdio.h>
#include <string.h>

int main(void){

	char input[100];
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0';

	printf("The length of the string is : %ld\n", strlen(input));
	return 0;

}
