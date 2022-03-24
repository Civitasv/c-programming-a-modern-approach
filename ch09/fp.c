#include "stdio.h"

int f(int);

int g(int num);

int main() {
    printf("%d", g(2));
    return 0;
}

int f(int num) {
    return num * 2;
}

int g(int num) {
    int (*fun_ptr)(int) = f;
    return fun_ptr(num);
}