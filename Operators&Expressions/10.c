/*Write a C program that defines a variable and then increments and decrements the value of
the variable using the ++ (increment) and -- (decrement) operators. Print the value of the
variable after each operation to the console.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    printf("By Prajjwal Thapaliya\n");
    int a = 10;
    printf("Initial value of a = %d", a);
    printf("After post increment::\n");
    printf("a++=%d\n", a++);
    printf("After pre increment::\n");
    printf("++a=%d\n", ++a);
}