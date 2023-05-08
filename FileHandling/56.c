/*56. Write a C program that copies the contents of one file to another. Use the fopen() function
to open the source file and the destination file, and use a loop to read and write each
character in the source file
*/
#include <stdio.h>

int main() {
	FILE *f1, *f2;
	f1 = fopen("text.txt", "r");
	f2 = fopen("output.txt", "w");
	char c;
	while ((c=fgetc(f1)) != EOF) {
		fputc(c, f2);
	}
	fclose(f1);
	fclose(f2);
	return 0;
}