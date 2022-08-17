#include <stdlib.h>

/* Write a C program to check two given integers whether either of them is in the range 100..200 inclusive. */

int main(void){
	printf("%d", check(150, 40));
	printf("\n%d", check(90,40));
	printf("\n%d", check(120, 20));
}

int check(int x, int y){
	return x >= 100 && x <= 200 || y >= 100 && x <= 200;
}
