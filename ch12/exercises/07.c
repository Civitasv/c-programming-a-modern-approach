#include <stdbool.h>

bool search(const int *a, int n, int key)
{
    int *ptr;

    for (ptr = a; ptr < a + n; ptr++)
    {
        if (*ptr == key)
            return true;
    }

    return false;
}