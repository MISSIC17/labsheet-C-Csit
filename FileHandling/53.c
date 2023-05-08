/*53. Write a C program that creates a new file and writes some text to it. Use the fopen()
function to create the file and the fprintf() function to write the text.
*/
#include <stdio.h>
int main()
{
    
    FILE *fp = fopen("text.txt", "w");
    fprintf(fp, "By Prajjwal Thapaliya\n");
    fprintf(fp, "Hello everyone");
    fclose(fp);
    return 0;
}