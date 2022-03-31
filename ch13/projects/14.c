#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

bool are_anagrams(const char *word1, const char *word2);
int main()
{
    char word1[20 + 1], word2[20 + 1];
    printf("Enter first word: ");
    scanf("%s", &word1);

    printf("Enter second word: ");
    scanf("%s", &word2);

    printf(are_anagrams(word1, word2)
               ? "The words are anagrams."
               : "The words are not anagrams.");
    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int alphabets[26] = {0};
    while (*word1 || *word2)
    {
        if (*word1)
        {
            alphabets[*word1++ - 'a']++;
        }
        if (*word2)
        {
            alphabets[*word2++ - 'a']--;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabets[i] != 0)
        {
            return false;
        }
    }

    return true;
}