#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, 5, stdin);
    // gets(str);

    while (str[count] != '\0')
    {
        printf("%c %d %d\n",str[count],str[count],count);
        count++;
    }

    printf("Length of the string: %d", count - 1); // Program 2: Subtract 1 from count

    return 0;
}