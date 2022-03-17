#include <stdio.h>

int main() {
    float x;
    printf("please input the value of x: ");
    scanf("%f", &x);

    printf("the value is: %f", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
    return 0;
}