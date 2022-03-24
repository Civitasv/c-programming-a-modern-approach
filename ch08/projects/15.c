#include "stdio.h"

int main() {
    char messages[80];
    int amount, i;
    char ch;
    printf("Enter message to be encrypted: ");
    i = 0;
    while ((ch = getchar()) != '\n') {
        messages[i++] = ch;
    }
    printf("Enter shift amount (1-25): ");
    scanf("%d", &amount);

    printf("Encrypted message: ");
    for (int j = 0; j < i; j++) {
        ch = messages[j];
        if (ch >= 'a' && ch <= 'z') {
            printf("%c", ((ch - 'a') + amount) % 26 + 'a');
        } else if (ch >= 'A' && ch <= 'Z') {
            printf("%c", ((ch - 'A') + amount) % 26 + 'A');
        } else {
            printf("%c", ch);
        }
    }

    return 0;
}