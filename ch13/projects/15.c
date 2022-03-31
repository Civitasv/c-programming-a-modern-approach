#include <stdio.h>
#include <stdlib.h>  /* exit */
#include <stdbool.h> /* C99+ only */
#include <string.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void);

bool is_empty(void);

bool is_full(void);

void push(int i);

int pop(void);

void stack_overflow(void);

void stack_underflow(void);

int evaluate_RPN_expression(const char *expression);

int read_line(char str[], int n);

int main(void)
{
    char expression[100 + 1];

    while (1)
    {
        printf("Enter an RPN expression: ");
        read_line(expression, 100);
        printf("Value of RPN expression: %d\n", evaluate_RPN_expression(expression));
    }
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("\nExpression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("\nNot enough operands in expression\n");
    exit(EXIT_FAILURE);
}

int evaluate_RPN_expression(const char *expression)
{
    char ch;
    int pop_a, pop_b;
    while (*expression)
    {
        ch = *expression++;
        if (ch == ' ')
            continue;
        if (ch >= '0' && ch <= '9')
        {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            pop_b = pop();
            pop_a = pop();
            if (ch == '+')
                push(pop_a + pop_b);
            else if (ch == '-')
                push(pop_a - pop_b);
            else if (ch == '*')
                push(pop_a * pop_b);
            else if (ch == '/')
                push(pop_a / pop_b);
        }
        else if (ch == '=')
        {
            int result = pop();
            make_empty();
            return result;
        }
        else
        {
            exit(EXIT_FAILURE);
        }
    }
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