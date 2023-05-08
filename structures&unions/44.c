/*44. Write a C program that creates a union to store different types of data, including an integer,
float, and character array. Initialize the union with different values and print them to the
console*/
#include <stdio.h>
#include <string.h>

union data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    printf("By Prajjwal Thapaliya\n");
    union data d;
    d.i = 20;
    printf("int: %d\n", d.i);
    d.f = 3.14;
    printf("float: %f\n", d.f);
    strcpy(d.str, "Hello Everyone");
    printf("string: %s", d.str);
    return 0;
}