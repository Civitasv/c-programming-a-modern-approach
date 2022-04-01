/**
 * a. B
 * b. 1
 */

#include <stdio.h>
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main()
{
    putchar(TOUPPER('1'));
    return 0;
}