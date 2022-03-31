#include <ctype.h>
#include "stdio.h"

int read_line(char str[], int n);
int compute_vowel_count(const char *sentence);

int main()
{
    char ch;
    char sentence[20 + 1];
    printf("Enter a sentence: ");
    read_line(sentence, 20);
    printf("Your sentence contains %d vowels.", compute_vowel_count(sentence));
    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int count = 0;
    char ch;
    while (*sentence)
    {
        ch = toupper(*sentence++);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count += 1;
    }

    return count;
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';

    return i;
}