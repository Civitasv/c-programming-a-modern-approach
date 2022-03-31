#include <stdio.h>

void reverse(char *message);

int main()
{
    char mes[100 + 1];
    char *loc = mes;

    printf("Enter a message: ");

    while (loc < mes + 100 && (*loc++ = getchar()) != '\n')
        ;
    *loc = '\0';
    reverse(mes);
    printf("Reversal is: ");
    printf("%s\n", mes);
    return 0;
}

void reverse(char *message)
{
    char *p = message, *q = message, temp;
    while (*q)
        q++;
    q -= 1;

    while (p < q)
    {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}