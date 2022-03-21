#include "stdio.h"

int main() {
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    printf("The reversal is: ");
    do {
        printf("%d", i % 10);
        i /= 10;
    } while (i != 0);

    return 0;
}