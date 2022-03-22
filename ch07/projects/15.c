/*
 * (a) 7
 * (b) 13
 * (c) 20
 * (d) 20
 * (e) 34
 * (f) 170
 * (g) 1754
 */
#include "stdio.h"

int main() {
    int number;
    short result = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
        result *= i;

    printf("Factorial of %d: %hd", number, result);
    return 0;
}