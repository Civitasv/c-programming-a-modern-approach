#include <limits.h>

void find_two_largest(int *a, int n, int *largest, int *second_largest)
{
    if (n < 2)
    {
        printf("The array at least has two elements.");
        return;
    }
    int *ptr;

    *largest = *second_largest = INT_MIN;

    for (ptr = a; ptr < a + n; ptr++)
    {
        if (*ptr > *largest)
        {
            *second_largest = *largest;
            *largest = *ptr;
        }
        else if (*ptr > *second_largest)
        {
            *second_largest = *ptr;
        }
    }
}