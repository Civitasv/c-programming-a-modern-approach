/*
 * a. 12 12
 * b. 3 4
 * c. 2 8
 * d. 6 9
 */

#include "stdio.h"

int main() {
    int i, j;

    i = 6;
    j = i += i;

    printf("%d %d\n", i, j);
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);

    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d", i, j);
    return 0;
}