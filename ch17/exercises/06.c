#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur;

    for (cur = list; cur != NULL && cur->next != NULL && cur->next->value != n; cur = cur->next)
        ;

    if (cur->next == NULL)
        return list; // cannot find n
    else
    {
        struct node *temp = cur->next;
        cur->next = temp->next;
        free(temp);
    }
    return list;
}