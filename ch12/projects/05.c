#include "stdio.h"

int main()
{
    char ch;
    char end;
    char sentence[100] = {0};
    char *loc = sentence;
    char *end_ptr;

    printf("Enter a sentence: ");
    while ((ch = getchar()))
    {
        if (ch == '?' || ch == '.' || ch == '!')
        {
            end = ch;
            break;
        }
        *loc++ = ch;
    }

    printf("Reversal of sentence: ");
    for (loc--; loc >= sentence; loc--)
    {
        end_ptr = loc;
        while (loc >= sentence && *loc != ' ')
            loc--;

        for (char *j = loc + 1; j <= end_ptr; j++)
        {
            printf("%c", *j);
        }
        if (loc >= sentence)
            printf(" ");
    }
    printf("%c", end);

    return 0;
}