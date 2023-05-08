/*55. Write a C program that appends some text to an existing file. Use the fopen() function with
the "a" mode to open the file and the fprintf() function to write the text
*/
#include <stdio.h>

int main() {
	FILE *fp;
	fp = fopen("text.txt", "a");
	fprintf(fp, "%s", "\nThis is the appended line");
	return 0;
}