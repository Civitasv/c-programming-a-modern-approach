#include <stdio.h>

#define PI 3.1415926f

int main() {
    float r = 10.0f;
    printf("for the sphere with radius %f, the volume is %f", r, (4.0f / 3.0f) * PI * r * r * r);

    return 0;
}