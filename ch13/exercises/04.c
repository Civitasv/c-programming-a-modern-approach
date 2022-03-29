#include <stdio.h>
#include <ctype.h>

int read_line_a(char str[], int n)
{
    int ch, i = 0;

    // 跳过空白字符
    while (isspace(getchar()))
        ;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
    return i;
}

int read_line_b(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) && !isspace(ch))
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
    return i;
}

int read_line_c(char str[], int n)
{
    int ch, i = 0;

    do
    {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    } while (ch != '\n');

    str[i] = '\0';
    return i;
}

int read_line_d(char str[], int n)
{
    int ch, i = 0;

    for (i = 0; i < n; i++)
    {
        ch = getchar();
        if (ch == '\n')
            break;

        str[i] = ch;
    }

    str[i] = '\0';
    return i;
}
