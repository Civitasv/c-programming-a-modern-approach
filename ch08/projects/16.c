#include <ctype.h>
#include "stdio.h"

int main() {
    int alphabets[26] = {0};
    char ch;
    int i;
    printf("Enter first word: ");

    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            alphabets[ch - 'a']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            alphabets[ch - 'a']--;
        }
    }

    for (i = 0; i < 26; i++) {
        if (alphabets[i] != 0) {
            printf("The words are not anagrams.");
            return 0;
        }
    }

    printf("The words are anagrams.");
    return 0;
}