#include <stdbool.h>
#include <stdlib.h>

/*  Write a C program to check a given integer and return true if it is within 10 of 100 or 200.
*/

int main(void)
{
	printf("%d", check_(203));
	printf("\n%d", check_(90));
	printf("\n%d", check_(80));
	}
	int check(int x)
	{
		if(abs(x - 100) <= 10 || abs(x -200) <= 10)
		{
			return true;
		}
		return false;
	}

int check_(int x) {
	if(x >= 10 || x <= 100 && x >=10 || x<= 200) return true;
	return false;

}
