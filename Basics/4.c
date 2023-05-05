#include <stdio.h>
// 4. Write a program that prompts the user to enter the radius of a circle, and then displays the
// circle's area and circumference.
#include <string.h>
#include <math.h>
#define PI 3.14
int main()
{

    printf("By Prajjwal Thapaliya\n");
    float r, a, c;
    printf("Enter the radius of circle::>>");
    scanf("%f", &r);
    a = PI * r * r;
    c = 2 * PI * r;
    printf("Area: %.2f sq.units \n", a);
    printf("Circumference: %.2f units\n", c);
    // return 0;
}