/*12. Write a C program that uses different operators in a single expression and prints the result
to the console. Include parentheses to change the precedence of the operators and observe
how the result changes*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    printf("By Prajjwal Thapaliya\n");
    int a = 5, b = 15, c = 2, d = 10;
    int exp1 = a * b - c / d;
    int exp2 = (a * b) - (c / d);
    int exp3 = a * (b - c) / d;
    int exp4 = a * b - (c / d);
    printf("a = %d\tb=%d\tc=%d\td=%d\n", a, b, c, d);
    printf("a*b-c/d = %d\n", exp1);
    printf("(a*b)-(c/d) = %d\n", exp2);
    printf("a*(b-c)/d = %d\n", exp2);
    printf("a*b-(c/d) = %d\n", exp3);
    return 0;
}