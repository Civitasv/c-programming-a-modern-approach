#include <stdio.h>

struct part
{
    int num;
};

int main()
{
    struct part x = {2};
    printf("%d\n", x.num);
    printf("%d\n", (&x)->num);

    return 0;
}