/*Write a C program that uses nested loops to print the following pattern to the console:
 *
 **
 ***
 ****
 ******/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    int i, j;
    printf("By Prajjwal Thapaliya\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}