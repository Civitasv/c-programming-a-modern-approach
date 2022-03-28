#include <stdio.h>

int main()
{
    char mes[100];
    char *loc = mes;

    printf("Enter a message: ");

    while (loc < mes + 100 && (*loc++ = getchar()) != '\n')
        ;
    printf("Reversal is: ");
    for (loc--; loc >= mes; loc--)
        printf("%c", *loc);

    return 0;
}