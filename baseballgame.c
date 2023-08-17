#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRndNum();
int* getGameNum();
int* splitInputNum(int input);

int main (void){

	int* nums = getGameNum();

	while(1){

		int input;
		printf("Input 3 numbers : ");
		if(scanf("%d", &input) != 1){
			printf("Invalid Number\n");

			int c;
			while((c = getchar()) != '\n' && c != EOF);
			continue;
	       	}

		printf("%d\n", input);

		int* inputArr = splitInputNum(input);
		for(int i = 0; i < 3; i++){

			printf("splited[%d] : %d\n", i, inputArr[i]);

		}

	}

	return 0;
};

int getRndNum(){
	srand(time(NULL));
	return rand() % 9 + 1;
};

int* getGameNum(){

	static int nums[3];

	int i = 0;
	int rndNum;

	while(i < 3){

		rndNum = getRndNum();

		int j;
		for(j = 0; j < i; j++){

			if(nums[j] == rndNum){
				rndNum = -1;
				break;
			}	
		}

		if(rndNum != -1){
			nums[i] = rndNum;
			i++;
		}

	}

	return nums;
};

int* splitInputNum(int input){

	static int inputArr[3];

	inputArr[0] = input / 100;
	inputArr[1] = (input / 10) % 10;
	inputArr[2] = input % 10;

	return inputArr;

}
