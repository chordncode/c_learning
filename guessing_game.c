#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));
	int answer = rand() % 9 + 1;
	int input = 0;

	while(answer != input){
		printf("Guess the number (1~9) : ");
		scanf("%d", &input);

		if(answer != input){
			printf("Incorrect Answer\n");
		}
		
	}
	printf("Congraturation! You Win!\n");
	return 0;

}
