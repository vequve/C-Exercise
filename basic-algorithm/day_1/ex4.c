#include <stdbool.h>
#include <stdlib.h>

/*  Write a C program to check a given integer and return true if it is within 10 of 100 or 200.
*/

int main(void)
{
	printf("%d", check(203));
	printf("\n%d", check(90));
	printf("\n%d", check(80));
	}
	int check(int x)
	{
		if(abs(x - 100) <= 10 || abs(x -200) <= 10)
		{
			return true;
		}
		return false;
	}

