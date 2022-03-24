#include "ctype.h"
#include "stdio.h"

#define N 100

int main() {
    char ch;
    char message[N];
    int size = 0;
    printf("Enter message: ");
    while ((ch = getchar()) != '\n' && size < N) {
        message[size++] = toupper(ch);
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < size; i++) {
        ch = message[i];
        if (ch == 'A') {
            putchar('4');
        } else if (ch == 'B') {
            putchar('8');
        } else if (ch == 'E') {
            putchar('3');
        } else if (ch == 'I') {
            putchar('1');
        } else if (ch == 'O') {
            putchar('0');
        } else if (ch == 'S') {
            putchar('5');
        } else {
            putchar(ch);
        }
    }

    printf("!!!!!!!!!!");

    return 0;
}
