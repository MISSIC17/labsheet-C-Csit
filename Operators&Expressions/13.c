/*13. Write a C program that declares variables of different data types (int, float, char, etc.) and
prints their sizes using the sizeof operator.*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    printf("By Prajjwal Thapaliya\n");
    int integer;
    float decimal;
    char c;
    char str[10];
    printf("Size of integer is %lu\n",sizeof(integer));
    printf("Size of float is %lu\n",sizeof(decimal));
    printf("Size of character is %lu\n",sizeof(c));
    printf("Size of string of length 10 is %lu\n",sizeof(str));



}