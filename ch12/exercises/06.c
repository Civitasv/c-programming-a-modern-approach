int sum_array(const int *a, int n)
{
    int sum;
    int *ptr;
    for (ptr = a; ptr < a + n; ptr++)
        sum += *ptr;

    return sum;
}