#include <stdio.h>

int main(void){

	FILE *pFile = fopen("/home/chordncode/ItsMe.txt", "w");
	char input[100];

	fgets(input, sizeof(input), stdin);
	fputs(input, pFile);

	fclose(pFile);
	return 0;

}
