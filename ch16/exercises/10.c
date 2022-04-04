#include <stdbool.h>

struct point
{
    int x;
    int y;
};

/**
 * ------------>
 * |
 * |
 * |
 * |
 * ↓
 */
struct rectangle
{
    struct point upper_left;
    struct point lower_right;
};

int calculate_area(struct rectangle r)
{
    return (r.lower_right.x - r.upper_left.x) *
           (r.lower_right.y - r.upper_left.y);
}

struct point mid_point(struct rectangle r)
{
    return (struct point){(r.lower_right.x + r.upper_left.x) / 2,
                          (r.lower_right.y + r.upper_left.y) / 2};
}

struct rectangle translate(struct rectangle r, int x, int y)
{
    return (struct rectangle){
        (struct point){r.upper_left.x + x, r.upper_left.y + y},
        (struct point){r.lower_right.x + x, r.lower_right.y + y}};
}

bool in_rectangle(struct rectangle r, struct point p)
{
    return p.x > r.upper_left.x && p.x < r.lower_right.x &&
           p.y > r.upper_left.y && p.y < r.lower_right.y;
}