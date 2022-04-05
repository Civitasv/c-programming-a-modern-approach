#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x, y;
};

struct rectangle
{
    struct point upper_left;
    struct point lower_right;
};

int main()
{
    struct rectangle *p = malloc(sizeof(struct rectangle));

    p->upper_left.x = 10;
    p->upper_left.y = 25;

    p->lower_right.x = 20;
    p->lower_right.y = 15;

    return 0;
}