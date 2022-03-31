#include <ctype.h>
#include "stdio.h"

int compute_scrabble_value(const char *word);

int main()
{
    char word[10];
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Scabble value: %d", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int sum = 0;
    char ch;
    while (*word)
    {
        ch = *word++;
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ch = toupper(ch);
            switch (ch)
            {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                sum += 1;
                break;
            case 'D':
            case 'G':
                sum += 2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                sum += 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J':
            case 'X':
                sum += 8;
                break;
            case 'Q':
            case 'Z':
                sum += 10;
                break;
            }
        }
    }

    return sum;
}