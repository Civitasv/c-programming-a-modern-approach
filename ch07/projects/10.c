#include <ctype.h>
#include "stdio.h"

int main() {
    char ch;
    short int count;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count += 1;
    }

    printf("Your sentence contains %hd vowels.", count);
    return 0;
}