#include <stdio.h>
#include <math.h>

void print_star(int n);
int position(double y, double min, double max, int maxpos);

int main(void){

	double x, y;
	int pos;

	for(x = 0.0; x < 6.4; x += 0.3){
		y = sin(x);
		pos = position(y, -1.0, 1.0, 40);
		print_star(pos);
	}
	return 0;	

}

void print_star(int n){
	int i;

	for(i = 0; i < n; i++){
		putchar(' ');
	}
	printf("*\n");
}

int position(double y, double min, double max, int maxpos){

	double ypos;

	if (y < min) return 0;
	if (y > max) return maxpos;

	ypos = (y - min) / (max - min) * maxpos;
	return (int) ypos;
}

