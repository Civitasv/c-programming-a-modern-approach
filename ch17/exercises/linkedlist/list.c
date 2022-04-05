#include "list.h"

int main()
{
    struct node *first = NULL;

    struct node *(*f)(struct node *, int);
    f = add_to_list;
    (*f)(first, 2);
}

struct node *add_to_list(struct node *list, int n)
{
    struct node *new_node = malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    new_node->value = n;
    new_node->next = list;
    return new_node;
}

struct node *search_list(struct node *list, int n)
{
    struct node *p;
    for (p = list; p != NULL; p = p->next)
    {
        if (n == p->value)
            return p;
    }

    return NULL;
}

struct node *delete_from_list(struct node *list, int n)
{
    struct node *prev, *cur;

    for (cur = list, prev = NULL;
         cur != NULL && cur->value != n;
         prev = cur, cur = cur->next)
        ;

    if (cur == NULL)
        return list; // cannot find n
    if (prev == NULL)
        list = list->next; // n is the first node
    else
        prev->next = cur->next;

    free(cur);
    return list;
}