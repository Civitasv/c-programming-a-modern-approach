#define RECTANGLE 0
#define CIRCLE 1
#define PI 3.1415926

struct point
{
    int x;
    int y;
};

struct shape
{
    int shape_kind;
    struct point center;

    union
    {
        struct
        {
            int height, width;
        } rectangle;

        struct
        {
            int radius;
        } circle;
    } u;
};

int shape_area(struct shape s)
{
    if (s.shape_kind == RECTANGLE)
    {
        return s.u.rectangle.height * s.u.rectangle.width;
    }
    else
    {
        int r = s.u.circle.radius;
        return PI * r * r;
    }
}

struct shape translate(struct shape s, int x, int y)
{
    struct shape res = s;
    res.center.x += x;
    res.center.y += y;

    return res;
}

struct shape zoom(struct shape s, double c)
{
    struct shape res = s;

    if (res.shape_kind == RECTANGLE)
    {
        res.u.rectangle.width *= c;
        res.u.rectangle.height *= c;
    }
    else
    {
        res.u.circle.radius *= c;
    }
    return res;
}
