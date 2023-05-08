/*58. Write a C program that reads the contents of a binary file and prints them to the console.
Use the fopen() function with the "rb" mode to open the file and the fread() function to read
the contents.*/
#include <stdio.h>

int main() {
	FILE *fp;
    printf("By Prajjwal Thapaliya\n");
	fp = fopen("data.bin", "rb");
	char str[20];
	fread(str, sizeof(char), 14, fp);
	puts(str);
	return 0;
}