double inner_product(const double *a, const double *b,
                     int n)
{
    double *ptr_a, *ptr_b;
    double sum = 0.0;
    for (ptr_a = a, ptr_b = b; ptr_a < a + n && ptr_b < b + n; ptr_a++, ptr_b++)
    {
        sum += *ptr_a * *ptr_b;
    }

    return sum;
}