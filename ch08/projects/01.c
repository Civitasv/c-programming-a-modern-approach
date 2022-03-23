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

    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++) {
        if (digit_times[i] > 1)
            printf("%d ", i);
    }

    return 0;
}