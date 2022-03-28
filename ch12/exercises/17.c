#define LEN 10

int sum_two_dimensional_array(const int *a[LEN], int n)
{
    int sum = 0;
    int *ptr;
    for (ptr = &a[0][0]; ptr <= &a[n - 1][LEN - 1]; ptr++)
        sum += *ptr;
    return sum;
}