#include <stdlib.h>
#include <stdbool.h>

/* Write a C program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise return false */

int main(void){
	printf("%d", check(10, 20, 30));
	printf("\n%d", check(1, 19, 3));
	printf("\n%d", check(20, 2, 1));
}

int check(int x, int y, int z){
	if(x >= 20 && x <= 50 || y >= 20 && y >= 50 || z >= 20 && z <= 50 ) return true;
	return false;
}
