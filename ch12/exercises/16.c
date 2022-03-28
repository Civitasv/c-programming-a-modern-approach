int temperatures[7][24];

int main()
{
    int *ptr;
    int i = 0;

    for (ptr = temperatures[0]; ptr < temperatures[7]; ptr++)
        printf("%d ", find_largest(ptr, 24));

    return 0;
}