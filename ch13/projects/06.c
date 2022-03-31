#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int my_strcmp(char *str_a, char *str_b);

int main(int argc, char *argv[])
{
    my_strcmp("mer", "MERCU");
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};

    int i, j;
    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
        {
            if (my_strcmp(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}

int my_strcmp(char *s, char *t)
{
    for (; toupper(*s) == toupper(*t); s++, t++)
        if (*s == '\0')
            return 0;

    return *s - *t;
}