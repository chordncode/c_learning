#include <stdio.h>

int main(){
	char characterName[] = "George";
	int charactorAge = 70;
	printf("There once was a man named %s\n", characterName);
	printf("He was %d years old.\n", charactorAge);
	printf("He really liked the name %s\n", characterName);
	printf("But did not like being %d.\n", charactorAge + 1);
	return 0;
}
