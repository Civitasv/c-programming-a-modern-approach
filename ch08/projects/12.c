#include "ctype.h"
#include "stdio.h"

int main() {
    char alphabets[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char ch;
    int sum;
    printf("Enter a word: ");
    sum = 0;
    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch = toupper(ch);
            sum += alphabets[ch - 'A'];
        }
    }
    printf("Scabble value: %d", sum);

    return 0;
}