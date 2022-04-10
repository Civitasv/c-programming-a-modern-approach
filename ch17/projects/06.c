#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 50
#define MAX_WORD_LENGTH 20

int read_line(char str[], int n);
int word_sort(const void *p, const void *q);

int main()
{
    char *words[MAX_WORDS];
    char word[MAX_WORD_LENGTH];
    int i = 0;
    for (;;)
    {
        printf("Enter word: ");
        read_line(word, MAX_WORD_LENGTH);
        if (strlen(word) == 0)
            break;

        if (i == MAX_WORDS)
        {
            printf("Not sufficient memory!\n");
            break;
        }
        words[i] = malloc(strlen(word) + 1);
        strcpy(words[i], word);
        i++;
    }

    printf("In sorted order: ");
    qsort(words, i, sizeof(*words), word_sort);

    for (int j = 0; j < i; j++)
        printf("%s ", words[j]);

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

int word_sort(const void *p, const void *q)
{
    return strcmp(*(char **)p, *(char **)q);
}