int temperatures[7][24];

int main()
{
    int *ptr;
    int i = 0;

    for (ptr = temperatures[i]; ptr < temperatures[i] + 24; ptr++)
        printf("%d ", *ptr);

    return 0;
}