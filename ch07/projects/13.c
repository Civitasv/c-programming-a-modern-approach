#include "stdio.h"

int main() {
    char ch;
    int count = 0, number = 0, sum = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            sum += count;
            count = 0;
            number += 1;
        } else {
            count += 1;
        }
    }
    sum += count;
    number += 1;
    printf("Average word length: %.1f", (sum * 1.0f) / number);
    return 0;
}