#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *list, int n);

struct node *search_list(struct node *list, int n);

struct node *delete_from_list(struct node *list, int n);

#endif