#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

void delete_from_list(struct node **list_ptr, int n)
{
    struct node *prev, *cur;

    for (cur = *list_ptr, prev = NULL;
         cur != NULL && cur->value != n;
         prev = cur, cur = cur->next)
        ;

    if (cur == NULL)
        return; // cannot find n
    if (prev == NULL)
        *list_ptr = (*list_ptr)->next; // n is the first node
    else
        prev->next = cur->next;

    free(cur);
}