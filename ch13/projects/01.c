#include <stdio.h>
#include <string.h>

int main()
{
    char smallest_word[20], largest_word[20];

    char word[20];
    printf("Enter word: ");
    scanf("%s", word);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);

    for (;;)
    {
        printf("Enter word: ");
        scanf("%s", word);

        if (strlen(word) == 4)
            break;
        if (strcmp(word, smallest_word) < 0)
            strcpy(smallest_word, word);
        if (strcmp(word, largest_word) > 0)
            strcpy(largest_word, word);
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}