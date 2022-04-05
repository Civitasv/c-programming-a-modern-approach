#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include "../linkedlist/list.h"

#define STACK_SIZE 100
/* external variables */
struct node *contents;

void make_empty(void);

bool is_empty(void);

bool push(int i);

int pop(void);

void stack_overflow(void);

void stack_underflow(void);

#endif