/*57. Write a C program that creates a binary file and writes some data to it. Use the fopen()
function with the "wb" mode to create the file and the fwrite() function to write the data.*/
#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp = fopen("data.bin", "wb");
    char str[] = "Hello everyone";
    fwrite(str, sizeof(char), strlen(str), fp);
    return 0;
}