#include <stdlib.h>
#include <stdio.h>

void *my_malloc(size_t _Size)
{
    void *p = malloc(_Size);

    if (p == NULL)
    {
        printf("Error: no sufficient memory to allocate!\n");
        exit(EXIT_FAILURE);
    }

    return p;
}