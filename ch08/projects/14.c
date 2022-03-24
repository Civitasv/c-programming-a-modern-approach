#include "stdio.h"

int main() {
    char ch;
    char end;
    char sentence[100] = {0};
    int i, j, end_index;
    printf("Enter a sentence: ");
    i = 0;
    while ((ch = getchar())) {
        if (ch == '?' || ch == '.' || ch == '!') {
            end = ch;
            break;
        }
        sentence[i++] = ch;
    }

    printf("Reversal of sentence: ");
    for (i = (int) (sizeof sentence / sizeof sentence[0]) - 1; i >= 0; i--) {
        while (i >= 0 && sentence[i] == 0)
            i--;
        end_index = i;
        while (i >= 0 && sentence[i] != ' ')
            i--;

        for (j = i + 1; j <= end_index; j++) {
            printf("%c", sentence[j]);
        }
        if (i >= 0)
            printf(" ");
    }
    printf("%c", end);

    return 0;
}