#include <stdlib.h>
#include <stdbool.h>

/* Write a C program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the said range otherwise false */

int main(void){
	printf("%d", check(10, 20));
	printf("\n%d", check(1, 19));
	printf("\n%d", check(20, 2));
}

int check(int x, int y){
	if(x >= 20 && x <= 50 || y >= 20 && y >= 50) return true;
	return false;
}
