#include <stdio.h>
#include <stdlib.h>

int main(){

	char line[255];
	FILE * fpointer = fopen("/home/chordncode/test.txt", "r");

	while(fgets(line, sizeof(line), fpointer) != NULL){

		printf("%s", line);

	}
	fclose(fpointer);

	return 0;	

}
