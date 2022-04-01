#include <stdio.h>

#define DISP(f, x) printf(#f " (%g) = %g\n", x, f(x))
#define DISP2(f, x, y) printf(#f " (%g, %g) = %g\n", x, y, f(x, y))

float f(float x)
{
    return x * x;
}
float g(float x, float y)
{
    return x * y;
}
int main()
{
    DISP(f, 2.0f);
    DISP2(g, 2.0f, 3.0f);
    return 0;
}