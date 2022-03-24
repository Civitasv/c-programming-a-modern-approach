#include <ctype.h>
#include <stdbool.h>
#include "stdio.h"

void read_word(int[]);

bool equal_array(int[], int[]);

int main() {
    int alphabets[26] = {0};
    int alphabets2[26] = {0};
    printf("Enter first word: ");
    read_word(alphabets);
    printf("Enter second word: ");
    read_word(alphabets2);

    if (equal_array(alphabets, alphabets2)) {
        printf("The words are anagrams.");
    } else {
        printf("The words are not anagrams.");
    }
    return 0;
}

void read_word(int alphabets[26]) {
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            alphabets[ch - 'a']++;
        }
    }
}

bool equal_array(int alphabets[26], int alphabets2[26]) {
    int i;
    for (i = 0; i < 26; i++) {
        if (alphabets[i] != alphabets2[i]) {
            return false;
        }
    }

    return true;
}
