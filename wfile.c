#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE * fpointer = fopen("/home/chordncode/test.txt", "w");
	fprintf(fpointer, "Iroha\nMiyu\nYuuka\n");
	fclose(fpointer);

	return 0;

}
