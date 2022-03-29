#include <string.h>
#include <stdio.h>

void get_extension(const char *file_name, char *extension)
{
    while (*file_name != '\0' && *file_name++ != '.')
        ;
    strcpy(extension, file_name);
}

int main()
{
    char extension[10];
    char *ptr = extension;
    get_extension("memo.txt", extension);

    printf(extension);
    return 0;
}