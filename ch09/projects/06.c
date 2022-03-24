#include "stdio.h"

int val(int);

int main() {
    int x;
    printf("input x: ");
    scanf("%d", &x);

    printf("The value is %d", val(x));
}

int val(int x) {
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}