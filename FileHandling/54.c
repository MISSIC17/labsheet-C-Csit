/*54. Write a C program that reads the contents of a file and prints them to the console. Use the
fopen() function to open the file and the fscanf() function to read the contents.*/
#include <stdio.h>

int main() {
	FILE *fp;
	fp = fopen("text.txt", "r");
	char str[50];
	fscanf(fp, "%[^\n]", str);
	printf("%s", str);
	return 0;
}