/*Write a C program that uses a do-while loop to ask the user to enter a number between 1
and 10. Continue to prompt the user until a valid number is entered. Print the valid number
to the console.*/
#include <stdio.h>
int main()
{
    printf("By Prajjwal Thapaliya\n");
    int num = 0;
    do
    {
        printf("Enter a number from 1 to 10\n");
        scanf("%d", &num);
    } while (num < 1 || num > 11);
    return 0;

}
