#include <malloc.h>
#include "stdio.h"

int main() {
    char *str = (char *) malloc(sizeof(char) * 4);

    char *p = str;
    *(str++) = '1';
    *(str++) = '2';
    *(str++) = '3';
    *str = '\0';

    printf("%s\n", p);
    printf("%d", 'A');
    return 0;
}
