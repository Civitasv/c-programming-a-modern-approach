int sum(int (*f)(int), int start, int end)
{
    int val = 0;

    for (int i = start; i <= end; i++)
        val += (*f)(i);
    return val;
}