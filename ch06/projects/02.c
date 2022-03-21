#include "stdio.h"

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    while (a != 0) {
        int temp = a;
        a = b % a;
        b = temp;
    }

    printf("Greatest common divisor: %d", b);
}