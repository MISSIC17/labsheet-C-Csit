/*Write a C program that uses an if-else statement to check if a given integer is even or odd.
Print a message to the console indicating the result.*/
#include <stdio.h>

int main()
{
    printf("By Prajjwal Thapaliya\n");
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }

    return 0;
}
