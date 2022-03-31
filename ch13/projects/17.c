#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_palindrome(const char *message);
int main()
{
    char mes[100];
    char *loc = mes;

    printf("Enter a message: ");

    while (loc < mes + 100 && (*loc++ = getchar()) != '\n')
        ;
    *loc = '\0';

    printf(is_palindrome(mes) ? "Palindrome" : "Not a palindrome");
    return 0;
}
bool is_palindrome(const char *message)
{
    const char *lo = message, *hi = message;
    while (*hi)
        hi++;
    hi--;
    while (lo < hi)
    {
        while (*lo && (tolower(*lo) <= 'a' || tolower(*lo) >= 'z'))
            lo++;

        while (hi >= message && (tolower(*hi) <= 'a' || tolower(*hi) >= 'z'))
            hi--;

        if (lo < hi && *lo && hi >= message)
        {
            if (tolower(*lo) != tolower(*hi))
            {
                return false;
            }
        }

        lo++;
        hi--;
    }

    return true;
}