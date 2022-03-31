#include "stdio.h"

void encrypt(char *message, int shift);

int main()
{
    char messages[80];
    int amount, i;
    char ch;
    printf("Enter message to be encrypted: ");
    i = 0;
    while ((ch = getchar()) != '\n')
    {
        messages[i++] = ch;
    }
    messages[i] = '\0';
    printf("Enter shift amount (1-25): ");
    scanf("%d", &amount);

    printf("Encrypted message: ");
    encrypt(messages, amount);
    return 0;
}

void encrypt(char *message, int shift)
{
    char ch;
    while (*message)
    {
        ch = *message++;
        if (ch >= 'a' && ch <= 'z')
        {
            printf("%c", ((ch - 'a') + shift) % 26 + 'a');
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            printf("%c", ((ch - 'A') + shift) % 26 + 'A');
        }
        else
        {
            printf("%c", ch);
        }
    }
}