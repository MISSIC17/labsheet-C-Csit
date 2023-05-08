/*43. Write a C program that accesses the members of a structure using the dot operator. Create a
structure to store information about a rectangle, including its length and width. Compute its
area and print it to the console.*/
#include <stdio.h>
// #include <string.h>

struct rectangle
{
    float l;
    float b;
};

int main()
{
    printf("By Prajjwal Thapaliya\n");
    struct rectangle r;
    printf("Enter length and breadth::> ");
    scanf("%f%f", &r.l, &r.b);
    float area = r.l * r.b;
    printf("Area of rectangle: %.2f sq. units", area);
    return 0;
}