#include <stdio.h>
#include <stdlib.h>

int plus(int num1, int num2);
int minus(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main (){

	int num1;
	int num2;
	char op;
	int result;

	printf("First Number : ");
	scanf("%d", &num1);

	printf("Operator : ");
	scanf(" %c", &op);

	printf("Second Number : ");
	scanf("%d", &num2);

	if(op == '+'){
		result = plus(num1, num2);
	} else if(op == '-'){
		result = minus(num1, num2);
	} else if(op == '*'){
		result = multiply(num1, num2);
	} else if(op == '/'){
		result = divide(num1, num2);
	} else {
		printf("Invalid Operator\n");
		return 0;
	}

	printf("%d %c %d = %d\n", num1, op, num2, result);
	return 0;

}

int plus (int num1, int num2){
	return num1 + num2;

}

int minus (int num1, int num2){
	return num1 - num2;
}

int multiply (int num1, int num2){
	return num1 * num2;
}

int divide (int num1, int num2){
	return num1 / num2;
}
