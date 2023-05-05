/*Write a C program that asks the user to enter two numbers and then performs bitwise
operations on them using the following operators: & (bitwise AND), | (bitwise OR), ^ (bitwise
XOR), ~ (bitwise NOT), << (left shift), >> (right shift). Print the results of each operation to the
console.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    printf("by Prajjwal Thapaliya\n");
    int a, b;
    printf("Enter two numbers::>>");
    scanf("%d %d", &a, &b);
    printf("Bitwise AND: %d & %d = %d\n", a, b, a & b);
    printf("Bitwise OR: %d | %d = %d\n", a, b, a | b);
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, a ^ b);
    printf("Bitwise NOT: ~%d= %d\n", a, ~a);
    printf("Bitwise left shit: %d<<2 =  %d\n", a, a << 2);
    printf("Bitwise right shit: %d>>2 = %d\n", a, a >> 2);
    return 0;
}