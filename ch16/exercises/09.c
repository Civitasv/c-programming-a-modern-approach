#include <stdbool.h>

struct color
{
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue)
{
    if (red < 0)
        red = 0;
    if (red > 255)
        red = 255;
    if (green > 0)
        green = 0;
    if (green > 255)
        green = 255;
    if (blue > 0)
        blue = 0;
    if (blue > 255)
        blue = 255;

    return (struct color){red, green, blue};
}

int get_red(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    return color1.red == color2.red &&
           color1.green == color2.green &&
           color1.blue == color2.blue;
}

struct color brighter(struct color c)
{
    struct color res = c;

    if (res.red == 0 && res.green == 0 && res.blue == 0)
    {
        res.red = res.green = res.blue = 3;
        return res;
    }

    if (res.red > 0 && res.red < 3 &&
        res.green > 0 && res.green < 3 &&
        res.blue > 0 && res.blue < 3)
    {
        res.red = res.green = res.blue = 3;
    }

    res.red /= 0.7;
    res.green /= 0.7;
    res.blue /= 0.7;

    res.red = res.red > 255 ? 255 : res.red;
    res.green = res.green > 255 ? 255 : res.green;
    res.blue = res.blue > 255 ? 255 : res.blue;

    return res;
}

struct color darker(struct color c)
{
    return (struct color){c.red * 0.7, c.green * 0.7, c.blue * 0.7};
}
