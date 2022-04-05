#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *duplicate(char *str)
{
    char *str_cpy = malloc(sizeof(*str) * strlen(str) + 1);
    if (str_cpy == NULL)
    {
        return NULL;
    }
    strcpy(str_cpy, str);
    return str_cpy;
}

int main()
{
    char *str = "TEST";
    char *p = duplicate(str);

    printf("%s", p);
    return 0;
}