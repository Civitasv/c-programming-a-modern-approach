#include "stdio.h"

int read_line(char str[], int n);
double compute_average_word_length(const char *sentence);

int main()
{
    char sentence[100 + 1];
    printf("Enter a sentence: ");
    read_line(sentence, 100);
    printf("Average word length: %.1f", compute_average_word_length(sentence));
    return 0;
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
double compute_average_word_length(const char *sentence)
{
    int count = 0, number = 0, sum = 0;
    char ch;
    while (*sentence)
    {
        ch = *sentence++;
        if (ch == ' ')
        {
            sum += count;
            count = 0;
            number += 1;
        }
        else
        {
            count += 1;
        }
    }
    sum += count;
    number += 1;
    return (sum * 1.0) / number;
}