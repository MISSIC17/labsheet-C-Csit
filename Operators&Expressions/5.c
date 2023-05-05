/*Write a C program that asks the user to enter two numbers and then performs arithmetic
operations on them using the following operators: + (addition), - (subtraction), **/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    printf("By Prajjwal Thapaliya");
    int a, b;
    printf("Enter two numbers::>>");
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d-%d=%d\n", a, b, a - b);
    return 0;
}