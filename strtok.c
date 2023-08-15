#include <stdio.h>
#include <string.h>

int main (void){

	char str[] = "LEE, CHOI, KANG, SEO, PARK";
	char *token;

	token = strtok(str, ", ");
	printf("%s\n", token);

	token = strtok(NULL, ", ");
	printf("%s\n", token);
	/*
	while(token != NULL){
		printf("%s\n", token);
		token = strtok(NULL, ", ");
	}
	*/
	return 0;

}
