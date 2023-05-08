/*14. Write a C program that declares variables of integer and floating-point data types and
performs arithmetic operations on them. Observe how the compiler performs implicit type
conversion to produce the correct result.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    printf("By Prajjwal Thapaliya\n");
    int a = 100;
    float f = 1.11;
    printf("%f + %d = %f (integer is promoted to floating point)\n", f, a, f + a);
    printf("%f - %d = %f (integer is promoted to floating point)\n", f, a, f - a);
    printf("%f * %d = %f (integer is promoted to floating point)\n", f, a, f * a);
    printf("%f / %d = %f (integer is promoted to floating point)\n", f, a, f / a);
}