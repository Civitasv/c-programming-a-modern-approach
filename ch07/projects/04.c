#include "stdio.h"

int main() {
    char ch;

    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            if (ch <= 'C')
                putchar('2');
            else if (ch <= 'F')
                putchar('3');
            else if (ch <= 'I')
                putchar('4');
            else if (ch <= 'L')
                putchar('5');
            else if (ch <= 'O')
                putchar('6');
            else if (ch <= 'S')
                putchar('7');
            else if (ch <= 'V')
                putchar('8');
            else if (ch <= 'Z')
                putchar('9');

        } else
            putchar(ch);
    }
    return 0;
}