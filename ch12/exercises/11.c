int find_largest(int *a, int n)
{
    int max = *a;
    int *ptr;

    for (ptr = a + 1; ptr < a + n; ptr++)
    {
        if (*ptr > max)
            max = *ptr;
    }

    return max;
}