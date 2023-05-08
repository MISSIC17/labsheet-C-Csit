/*47. Write a C program that creates a structure representing a complex number. Include fields for
the real and imaginary parts, which are represented by a union with fields for an integer and
float. Use the dot and arrow operators to access and print the fields.*/
#include <stdio.h>

union number
{
    int i;
    float f;
};

struct complex
{
    union number re;
    union number im;
};

int main()
{
    printf("By Prajjwal Thapaliya\n");
    struct complex z;
    struct complex *pz;
    pz = &z;
    pz->re.f = 5.1;
    pz->im.i = 6;
    printf("%.2f + %di", pz->re.f, pz->im.i);
    return 0;
}