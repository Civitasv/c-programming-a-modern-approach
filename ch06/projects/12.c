#include "stdio.h"

int main() {
    int i;
    float n;
    float current = 1.0f;
    float e_approxi = 1.0f;
    printf("input a small number:");
    scanf("%f", &n);

    i = 1;
    while (current >= n) {
        e_approxi += current;
        current /= ++i;
    }
    printf("an approximation of e is %f", e_approxi);
    return 0;
}