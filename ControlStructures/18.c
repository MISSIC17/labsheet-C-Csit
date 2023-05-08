/*Write a C program that uses nested if statements to check if a given integer is a multiple of
2, 3, or 5. Print a message to the console indicating the result.*/
#include <stdio.h>

int main()
{
    int num;
    printf("By Prajjwal Thapaliya \n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is a multiple of 2.\n", num);
        if (num % 3 == 0)
        {
            printf("%d is a multiple of 3.\n", num);
            if (num % 5 == 0)
            {
                printf("%d is a multiple of 5.\n", num);
            }
        }
        else if (num % 5 == 0)
        {
            printf("%d is a multiple of 5.\n", num);
        }
    }
    else if (num % 3 == 0)
    {
        printf("%d is a multiple of 3.\n", num);
        if (num % 5 == 0)
        {
            printf("%d is a multiple of 5.\n", num);
        }
    }
    else if (num % 5 == 0)
    {
        printf("%d is a multiple of 5.\n", num);
    }
    else
    {
        printf("%d is not a multiple of 2, 3, or 5.\n", num);
    }

    return 0;
}
