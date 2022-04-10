# Functional Programming In C

> Functional programming paradigm is used to create clean and maintainable software. This article illustrates the idea of functional programming and shows how this paradigm be realized using C.

## Why use functional programming

Functional programming use pure functions to create programs that won't change state at all.

The results of pure functions are only dependent upon the input parameters, same input always lead to same output.

This feature of functional programming make it so popular and important in parallel programming.

## Function as paramter and return value

```c
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
```
