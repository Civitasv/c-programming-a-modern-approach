void capitalize(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
}

void capitalize2(char *str)
{
    for (; *str != '\0'; str++)
        *str = toupper(*str);
}