/*Write a C program that uses if statements with logical operators to check if a given integer is
a prime number. Print a message to the console indicating the result.*/
#include <stdio.h>

int main()
{
    int num, i, flag = 0;
    printf("By Prajjwal Thapaliya\n");

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        flag = 1;
    }

    for (i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
