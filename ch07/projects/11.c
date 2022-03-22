#include "stdio.h"

int main() {
    char ch;
    char first_name;
    printf("Enter a first and last name: ");

    first_name = getchar();
    while ((ch = getchar()) != ' ') ;

    while ((ch = getchar()) != '\n') {
        putchar(ch);
    }
    putchar(',');
    putchar(' ');
    putchar(first_name);
    putchar('.');
    return 0;
}