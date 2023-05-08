/*11. Write a C program that asks the user to enter two numbers and then uses the conditional
operator ?: to compare them. If the first number is greater than the second number, print
"First number is greater", otherwise print "Second number is greater".*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    printf("By Prajjwal Thapaliya\n");

    int a, b;
    printf("Enter two numbers::>>");
    scanf("%d %d", &a, &b);
    (a > b) ? printf("First number is greater") : printf("Second number is greater");
}