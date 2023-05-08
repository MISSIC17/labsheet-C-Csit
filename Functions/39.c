/*
39. Write a C program that defines a recursive function that calculates the factorial of a number.
Call the function and print the result to the console.
*/
#include <stdio.h>
int fact(int);
int main()
{
    printf("By Prajjwal Thapaliya\n");
    int a, f;
    printf("Enter a number: ");
    scanf("%d", &a);
    f = fact(a);
    printf("Factorial of %d is %d", a, f);
    return 0;
}

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact(n - 1);
}