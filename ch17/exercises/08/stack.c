#include <stdlib.h>
#include "stack.h"

void make_empty(void)
{
    struct node *temp;
    while (contents != NULL)
    {
        temp = contents;
        contents = contents->next;
        free(temp);
    }
}

bool is_empty(void)
{
    return contents == NULL;
}

bool push(int i)
{
    struct node *new_node = malloc(sizeof(*contents));
    if (new_node == NULL)
        return false;
    new_node->value = i;
    new_node->next = contents;

    contents = new_node;
    return true;
}

int pop(void)
{
    if (is_empty())
    {
        stack_underflow();
    }

    int value = contents->value;
    struct node *temp = contents;
    contents = contents->next;
    free(temp);
    return value;
}

void stack_underflow(void)
{
    printf("STACK UNDERFLOW.\n");
    exit(EXIT_FAILURE);
}
