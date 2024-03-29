/**
 * a. x 是长度为10的指针数组，其中的每一项指向以 int 为参数，以 char 为返回值的数组
 * b. x 是以 int 为参数的函数，该函数返回一个指针，该指针指向长度为 5 的 int 数组
 * c. x 是以 void 类型为参数，返回值为指向函数的指针（该函数以 int 类型为参数，以 float* 为返回值）的函数
 * d. x 是具有两个参数的函数，第一个参数是 int，第二个参数是以 int 为参数，无返回值的函数，x 函数返回
 *    指向以 int 为参数，无返回值的函数的指针
 */

#include <stdio.h>

void f(int a, int b)
{
    printf("TEST");
}

int test(int a)
{
    return a * 2;
}

int (*testG(int a))(int b)
{
    return test;
}

int main()
{
    void (*x)(int, int) = f;
    int a = (*testG(2))(3);
    printf("%d \n", a);
}
