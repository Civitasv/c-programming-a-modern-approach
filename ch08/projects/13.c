#include <ctype.h>
#include "stdio.h"

int main() {
    char name[20] = {0};
    char ch;
    char first_name;
    int i;
    printf("Enter a first and last name: ");

    first_name = getchar();
    while ((ch = getchar()) != ' ');

    i = 0;
    while ((ch = getchar()) != '\n') {
        name[i++] = ch;
    }
    for (i = 0; i < (int) (sizeof name / sizeof name[0]); i++) {
        if (toupper(name[i] >= 'A') && toupper(name[i]) <= 'Z') {
            printf("%c", name[i]);
        }
    }
    putchar(',');
    putchar(' ');
    putchar(first_name);
    putchar('.');
    return 0;
}
