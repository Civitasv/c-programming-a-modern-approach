#include <stdio.h>

int main() {
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%f", amount * 1.05f);

    return 0;
}