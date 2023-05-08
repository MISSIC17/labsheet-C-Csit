/*15. Write a C program that declares variables of different data types and casts them to another
data type using the (type) operator. Observe how explicit type conversion overrides implicit
type conversion.*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("By Prajjwal Thapaliya\n");
    int a = 10;
    int b = 11;
    float f = 1.1;
    float res = (float)a / b; // casting a/b to float
    printf("%f\n", res);
    float res2 = a / (int)f; // casting f to int
    printf("%f", res2);
    return 0;
}