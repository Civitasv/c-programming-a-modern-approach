void remove_filename(char *url)
{
    char *loc;

    while (*url)
    {
        if (*url == '/')
            loc = url;
        url++;
    }
    *loc = '\0';
}