#include <stdio.h>
// Write a program that prompts the user to enter a temperature in Celsius, and then displays
// the temperature in Fahrenheit.
#include <string.h>

#include <math.h>
int main()
{
    printf("By Prajjwal Thapaliya\n");
    float cel, fahr;
    printf("Enter the temperature in celsius::>>");
    scanf("%f", &cel);
    fahr = (cel * 9 / 5) + 32;
    printf("The equivalent fahrenheit temperature is %.2f F", fahr);
    return 0;
}