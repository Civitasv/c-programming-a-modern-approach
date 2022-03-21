#include "stdio.h"

int main() {
    int number, max = -1;

    for (;;) {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number <= 0)
            break;
        max = max > number ? max : number;
    }

    printf("The largest number entered was %d", max);

    return 0;
}