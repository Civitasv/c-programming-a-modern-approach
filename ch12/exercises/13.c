#define N 10
double ident[N][N];

int main()
{
    double *ptr;
    int count = N;

    for (ptr = &ident[0][0]; ptr <= &ident[N - 1][N - 1]; ptr++)
    {
        if (count == N)
        {
            *ptr = 1;
            count = 0;
        }
        else
        {
            *ptr = 0;
            count += 1;
        }
    }

    return 0;
}