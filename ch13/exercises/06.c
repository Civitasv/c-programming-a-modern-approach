void censor(char *str)
{
    for (; *str != '\0'; str++)
        if (*str == 'f' && *(str + 1) == 'o' && *(str + 2) == 'o')
            *str = *(str + 1) = *(str + 2) = 'x';
}