#include "stdio.h"

int main() {
    char ch;
    float number, result;
    printf("Enter an expression: ");

    scanf("%f", &result);
    while ((ch = getchar()) != '\n') {
        if (ch == '+') {
            scanf("%f", &number);
            result += number;
        } else if (ch == '-') {
            scanf("%f", &number);
            result -= number;
        } else if (ch == '*') {
            scanf("%f", &number);
            result *= number;
        } else if (ch == '/') {
            scanf("%f", &number);
            result /= number;
        }
    }
    printf("Value of expression: %f", result);
    return 0;
}