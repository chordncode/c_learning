#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// create an array with non-duplicate numbers
int* getGameNum();
// create a random number using rand()
int getRndNum();
// split the input number
int* splitInputNum(int input);
// empty the buffer from scanf
void emptyBuffer();
// get the number of the same number located at the same index
int getStrikeCount(int* nums, int* inputArr);
// get the number of the same number but it is located at the different index
int getBallCount(int* nums, int* inputArr);

int main (void){

	int* nums = getGameNum();
//	for(int i = 0; i < 3; i++){
//		printf("%d", nums[i]);
//	}
//	printf("\n");

	while(1){

		int strike;
		int ball;
		int input;
		printf("Input 3 numbers : ");
		if(scanf("%d", &input) != 1){
			printf("Invalid Number\n");
			emptyBuffer();
			continue;
	       	}

//		printf("%d\n", input);

		int* inputArr = splitInputNum(input);

		strike = getStrikeCount(nums, inputArr);
		ball = getBallCount(nums, inputArr);

		printf("%dS%dB\n", strike, ball);

		if(strike == 3){
			printf("Yow Win!\n");
			break;
		}

	}

	return 0;
}

int getRndNum(){
	srand(time(NULL));
	return rand() % 9 + 1;
}

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
}

int* splitInputNum(int input){

	static int inputArr[3];

	inputArr[0] = input / 100;
	inputArr[1] = (input / 10) % 10;
	inputArr[2] = input % 10;

	return inputArr;

}

void emptyBuffer(){
	int c;
	while((c = getchar()) != '\n' && c != EOF);
}

int getStrikeCount(int* nums, int* inputArr){

	int strike = 0;
	for(int i = 0; i < 3; i++){
		if(nums[i] == inputArr[i]){
			strike++;
		}	
	}

	return strike;
}

int getBallCount(int* nums, int* inputArr){
	
	int ball = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == j) continue;
			if(nums[i] == inputArr[j]){
				ball++;
			}
		}
	}

	return ball;
}
