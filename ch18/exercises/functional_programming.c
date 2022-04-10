#include <stdio.h>

int g(int (*f)(int), int x);

int (*k(void))(int x);

int temp(int x);

int main()
{
    // function as parameter
    int val = g(temp, 2); // expect 2

    // function as return value
    int val2 = k()(2); // expect 2

    printf("%d %d", val, val2);
    return 0;
}

int g(int (*f)(int), int x)
{
    return (*f)(x);
}

int (*k(void))(int)
{
    return temp;
}

int temp(int x)
{
    return x;
}