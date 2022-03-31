#include <stdio.h>
#include <string.h>

char *reverse_name(char *name);
int read_line(char str[], int n);

int main()
{
    char name[100 + 1];

    printf("Enter a first and last name: ");
    read_line(name, 100);
    printf("%s", reverse_name(name));
    return 0;
}

char *reverse_name(char *name)
{
    char *result;
    while (*name && *name == ' ')
        name++;

    char first_name = *name;
    while (*name && *name++ != ' ')
        ;
    while (*name && *name == ' ')
        name++;
    result = name;

    strcat(name, ", ");
    strcat(name, (char[]){first_name, '\0'});
    strcat(name, ".");
    return result;
}
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';

    return i;
}