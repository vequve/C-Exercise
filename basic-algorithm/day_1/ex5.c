#include <stdlib.h>
#include <stdbool.h>

int main(void) {
	printf("%d", check(21));
	printf("\n%d", check(6));
	printf("\n%d", check(8));
}

int check(int x){
	if(x % 7 == 0 || x % 3 == 0) return true;
	return false;
}


