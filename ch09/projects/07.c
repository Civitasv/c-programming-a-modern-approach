#include "stdio.h"

int power(int, int);

int main(void) {

    int x, n;

    printf("For x^n, enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d^%d = %d\n", x, n, power(x, n));
    return 0;
}

int power(int x, int n) {
    if (n == 0)
        return 1;

    if (n % 2 == 0) {
        int val = power(x, n / 2);
        return val * val;
    } else return x * power(x, n - 1);
}