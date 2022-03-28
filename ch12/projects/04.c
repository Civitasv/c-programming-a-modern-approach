#include <stdio.h>
#include <ctype.h>

int main()
{
    char mes[100];
    char *loc = mes;

    char *lo, *hi;

    printf("Enter a message: ");

    while (loc < mes + 100 && (*loc++ = getchar()) != '\n')
        ;
    lo = mes;
    hi = loc - 1;

    while (lo < hi)
    {
        *lo = tolower(*lo);
        *hi = tolower(*hi);
        while (lo < loc && (*lo <= 'a' || *lo >= 'z'))
            lo++;

        while (hi >= 0 && (*hi <= 'a' || *hi >= 'z'))
            hi--;

        if (lo < hi && lo < loc && hi >= 0)
        {
            if (*lo != *hi)
            {
                printf("Not a palindrome");
                return 0;
            }
        }

        lo++;
        hi--;
    }

    printf("Palindrome");
    return 0;
}