#include <stdio.h>
#include <string.h>

int main(){

	FILE *file = fopen("/home/chordncode/friends.txt", "a+");

	char input[100];
	char friends[1000];

	printf("New Friend's Name : ");
	fgets(input, sizeof(input), stdin);

	fputs(input, file);

	fseek(file, 0, SEEK_SET);

	while(fgets(friends, 100, file) != NULL){
		printf("%s\n", friends);
	}
	fclose(file);
	return 0;	

}
