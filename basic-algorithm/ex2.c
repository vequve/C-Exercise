#include <stdio.h>

/* Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference */

int main(void) 
{
	printf("%d", diff(53));
	printf("\n%d", diff(30));
	printf("\n%d", diff(51));

	}
	int diff(int n)
	{
	    const x = 51;
	    if (n > x)
	    {
		return (n-x)*3;
	    }
	    return x-n;
	}
