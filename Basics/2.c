#include <stdio.h>
//2. Write a program that prompts the user to enter two integers, and then displays their sum.

#include <string.h>
#include <math.h>
int main()
{
    printf("By Prajjwal Thapaliya\n");
    int a, b;
    printf("Enter two numbers::>\t");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("The sum of the two numbers is %d", sum);
    return 0;
}