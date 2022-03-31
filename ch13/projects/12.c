#include "stdio.h"

int main()
{
    char ch;
    char end;
    char words[30][20 + 1];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    i = 0;
    while ((ch = getchar()))
    {
        if (ch == '?' || ch == '.' || ch == '!')
        {
            end = ch;
            break;
        }
        if (ch == ' ')
        {
            words[i][j] = '\0';
            i++;
            j = 0;
        }
        else
            words[i][j++] = ch;
    }

    printf("Reversal of sentence: ");
    for (; i >= 0; i--)
    {
        printf("%s", words[i]);
        if (i > 0)
            printf(" ");
    }

    printf("%c", end);

    return 0;
}