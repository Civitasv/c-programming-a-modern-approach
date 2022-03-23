#include "stdio.h"

int main() {
    int digit_times[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n > 0) {
        digit = n % 10;
        digit_times[digit]++;
        n /= 10;
    }

    printf("Digit:         ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }

    printf("\nOccurrences:   ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", digit_times[i]);
    }

    return 0;
}
