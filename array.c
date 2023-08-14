#include <stdio.h>
#include <stdlib.h>

int main(){

	int nums[5];

	printf("Input Five Numbers\n");
	printf("1) : ");
	scanf("%d", &nums[0]);
	printf("2) : ");
	scanf("%d", &nums[1]);
	printf("3) : ");
	scanf("%d", &nums[2]);
	printf("4) : ");
	scanf("%d", &nums[3]);
	printf("5) : ");
	scanf("%d", &nums[4]);

	printf("\nHere's your numbers!\n");
	for(int i = 0; i < 5; i++){
		if(i > 0) {
			printf(", ");
		}
		printf("%d", nums[i]);
	}
	printf("\n");
	return 0;
}
