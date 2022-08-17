#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("%d", check(30, 5));
	printf("\n%d", check(15, 15));
	printf("\n%d", check(5, 2));
	}
	int check(int x, int y)
	{
		if(x == 30 || y == 30)
		{
			return true;
		}
		else if(x+y == 30)
		{
			return true;
		}
		return false;
	}
