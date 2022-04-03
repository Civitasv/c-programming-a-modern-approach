#include <stdio.h>
#include "stack.h"

int main(void)
{
    char ch;
    int pop_a, pop_b;

    while (1)
    {
        printf("Enter an RPN expression: ");

        while ((ch = getchar()) != '\n')
        {
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
                printf("Value of expression: %d\n", pop());
                make_empty();
            }
            else
            {
                return 0;
            }
        }
    }
}
