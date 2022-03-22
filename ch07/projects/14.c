#include <math.h>
#include "stdio.h"

int main() {
    int x;
    double y = 1;
    printf("Enter a positive number: ");
    scanf("%d", &x);

    for (;;) {
        if (fabs((x / y + y) / 2 - y) < 1e-5) {
            break;
        }

        y = (y + x / y) / 2;
    }
    printf("Square root: %f", y);
}