/*16. Write a C program that uses an if statement to check if a given integer is positive, negative,
or zero. Print a message to the console indicating the result.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    int a;
    printf("By Prajjwal Thapaliya\n");
    printf("Enter a number::>>");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is positive",a);
    }
    else if (a < 0)
    {
        printf("%d is negative",a);
    }
    else
    {
        printf("%d is zero",a);
    }
    return 0;
}