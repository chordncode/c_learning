#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRndNum();
int* getGameNum();

int main (void){

	int* nums = getGameNum();

	for(int i = 0; i < 3; i++){

		printf("%d\n", nums[i]);
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

