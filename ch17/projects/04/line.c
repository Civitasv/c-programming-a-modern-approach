#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 10

struct word
{
    struct word *next;
    char word[];
};

struct word *line = NULL;
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
    struct word *p;
    while (line != NULL)
    {
        p = line;
        line = line->next;
        free(p);
    }
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    struct word *new_node, *p;

    new_node = malloc(sizeof(struct word) + strlen(word) + 1);
    if (new_node == NULL)
    {
        printf("Insufficient memory!");
        return;
    }
    strcpy(new_node->word, word);
    new_node->next = NULL;

    if (line == NULL)
        line = new_node;
    else
    {
        for (p = line; p->next != NULL; p = p->next)
            ;
        p->next = new_node;
    }
    if (num_words > 0)
        line_len++;
    line_len += strlen(word);
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, i;
    struct word *p;
    extra_spaces = MAX_LINE_LEN - line_len;

    for (p = line; p != NULL; p = p->next)
    {
        printf("%s", p->word);

        if (num_words > 1)
        {
            spaces_to_insert = extra_spaces / (num_words - 1);
            for (i = 1; i <= spaces_to_insert + 1; i++)
            {
                putchar(' ');
            }
            extra_spaces -= spaces_to_insert;
        }
        num_words--;
    }
    putchar('\n');
}
void flush_line(void)
{
    struct word *p;
    if (line_len < 0)
    {
        for (p = line; p != NULL; p = p->next)
        {
            printf("%s", p->word);
            if (p->next != NULL)
                putchar(' ');
        }
    }
    putchar('\n');
    clear_line();
}