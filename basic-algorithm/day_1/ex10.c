#include <stdio.h>
#include <stdlib.h>

/* Write a C program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal */


int main(void){
    printf("%d",test(78, 95));
    printf("\n%d",test(95, 95));
    printf("\n%d",test(99, 70));
    }       
   int test(int x, int y)
        {
            int n = 100;
            int val = abs(x - n);
            int val2 = abs(y - n);
            return val == val2 ? 0 : (val < val2 ? x : y);
        }
