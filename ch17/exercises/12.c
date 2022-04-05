#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

struct node *find_last(struct node *list, int n)
{
    struct node *last;
    for (; list != NULL; list = list->next)
    {
        if (list->value == n)
            last = list;
    }

    return last;
}