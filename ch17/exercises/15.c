// 输出：Answer: 3\n
// 程序用于找出 f2(i)=0 时 i 的值

#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

int main()
{
    printf("Answer: %d\n", f1(f2));

    return 0;
}

int f1(int (*f)(int))
{
    int n = 0;

    while ((*f)(n))
        n++;

    return n;
}

int f2(int i)
{
    return i * i + i - 12;
}