void store_zeros(int *a, int n)
{
    int *ptr;

    for (ptr = a; ptr < a + n; ptr++)
    {
        *ptr = 0;
    }
}