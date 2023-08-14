#include <stdio.h>
#include <string.h>

struct Student{
	char name[30];
	int age;
	int grade;
};

int main(){

	struct Student student1;
	strcpy(student1.name, "Iroha");
	student1.age = 16;
	student1.grade = 1;

	printf("Name : %s\n", student1.name);
	printf("Age : %d\n", student1.age);
	printf("Grade : %d\n", student1.grade);

	return 0;

}
