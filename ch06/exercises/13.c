/*
 * for (n = 0; m > 0; n++, m/=2);
 */
#include <stdio.h>

int main() {
    int m, n;
    m = 30;
    for (n = 0; m > 0; n++, m /= 2);

    return 0;
}