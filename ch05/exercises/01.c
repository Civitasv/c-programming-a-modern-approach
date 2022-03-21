/*
 * a. k=((i * j) == 6), so k=1
 * b. 1
 * c. 1
 * d. 0
 */
#include "stdio.h"

int main() {
    int i, j, k;

    i = 2;
    j = 3;
    k = i * j == 6;

    printf("%d", k);
    return 0;
}