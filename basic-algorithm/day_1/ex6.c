#include <stdlib.h>


/*  Write a C program to check whether a given temperatures is less than 0 and the other is greater than 100. */

int main(void) {
	printf("%d", check(-10, 101));
	printf("\n%d", check(-1, 200));
	printf("\n%d", check(-8, 90));
}

int check(int x, int y){
	return x < 0 && y > 100 || y < 0 && x > 100;
}
