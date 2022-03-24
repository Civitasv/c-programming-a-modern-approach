/*
 * 计算传入值的二进制表示
 */
#include "stdio.h"

void pb(int);

int main() {
    pb(1);
    printf("\n");
    pb(2);
    printf("\n");
    pb(3);
    printf("\n");
    pb(4);
    printf("\n");
    pb(5);
    printf("\n");
    pb(6);
    return 0;
}

void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}