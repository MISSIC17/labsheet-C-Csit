/*Write a C program that asks the user to enter two numbers and then compares them using
the following relational operators: == (equal to), != (not equal to), > (greater than), < (less
than), >= (greater than or equal to), <= (less than or equal to). Print the result of each
comparison to the console.*/
#include <stdio.h>

int main()
{

    printf("By Prajjwal Thapaliya\n");
    int a, b;
    printf("Enter two numbers::>>");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("%d == %d : true\n", a, b);
    }
    else
    {
        printf("%d == %d : false\n", a, b);
    }
    if (a != b)
    {

        printf("%d != %d : true\n", a, b);
    }
    else
    {
        printf("%d != %d : false\n", a, b);
    }
    if (a > b)
    {
        printf("%d > %d : true\n", a, b);
    }
    else
    {
        printf("%d > %d : false\n", a, b);
    }
    if (a < b)
    {
        printf("%d < %d : true\n", a, b);
    }
    else
    {
        printf("%d < %d : false\n", a, b);
    }
    if (a >= b)
    {
        printf("%d >= %d : true\n", a, b);
    }
    else
    {
        printf("%d >= %d : false\n", a, b);
    }
    if (a <= b)
    {
        printf("%d <= %d : true\n", a, b);
    }
    else
    {
        printf("%d <= %d : false\n", a, b);
    }
    return 0;
}