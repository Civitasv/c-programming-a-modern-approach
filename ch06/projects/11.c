#include "stdio.h"

int main() {
    int n;
    float current = 1.0f;
    float e_approxi = 1.0f;
    printf("input a number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        e_approxi += current;
        current = current / (i + 1.0f);
    }
    printf("an approximation of e is %f", e_approxi);
    return 0;
}