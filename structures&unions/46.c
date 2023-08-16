/*46. Write a C program that uses a pointer to a structure. Create a structure to store information
about a book, including its title, author, and publication year. Use a pointer to the structure
to access the members of the structure to display in console.*/
#include <stdio.h>
#include <string.h>

struct book {
	char title[30];
	char author[30];
	int year;
};

int main() {
	struct book b;
	struct book *bp;
	bp = &b;
    printf("By Prajjwal Thapaliya\n");
	strcpy(bp->title, "Karnali Blues");
	strcpy(bp->author, "Buddisagar");
	bp->year = 2020;
	printf("Book: \"%s\" by %s\n Released in %d", bp->title, bp->author, bp->year);
	return 0;
}
