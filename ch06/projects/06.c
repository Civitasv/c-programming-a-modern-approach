#include "stdio.h"

int main() {
    int n;

    printf("input a number: ");
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i += 2) {
        printf("%d\n", i*i);
    }
    return 0;
}