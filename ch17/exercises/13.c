#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *fake = {0, list};
    struct node *cur = list, *prev = fake;

    while (cur->value <= new_node->value)
    {
        prev = cur;
        cur = cur->next;
    }

    prev->next = new_node;
    new_node->next = cur;

    return fake->next;
}