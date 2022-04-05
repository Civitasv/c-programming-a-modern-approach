#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value)
{
    int *arr = malloc(sizeof(int) * n);
    int *p;
    for (p = arr; p < arr + n; p++)
        *p = initial_value;

    return arr;
}