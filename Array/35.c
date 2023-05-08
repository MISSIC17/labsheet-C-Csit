/*35. Write a C program that defines two strings and concatenates them using the strcat()
function. Print the concatenated string to the console*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

printf("By Prajjwal Thapaliya\n");
char s1[10] = "Hello ";
char s2[10] = "Everyone";
strcat(s1,s2);
puts(s1);
return 0;




}