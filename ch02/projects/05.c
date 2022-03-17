#include <stdio.h>

int main() {
    float x;
    printf("please input the value of x: ");
    scanf("%f", &x);

    printf("the value is: %f", 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6);
    return 0;
}