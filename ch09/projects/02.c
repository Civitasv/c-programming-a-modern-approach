#include "stdio.h"

float cal_tax(float);

int main() {
    float income;

    printf("请输入需纳税的收入: ");
    scanf("%f", &income);

    printf("需要缴纳税金: ");
    printf("%f", cal_tax(income));

    return 0;
}

float cal_tax(float income) {
    float tax;
    if (income <= 750)
        tax = .01f * income;
    else if (income <= 2250)
        tax = 7.50f + (income - 750) * .02f;
    else if (income <= 3750)
        tax = 37.50f + (income - 2250) * .03f;
    else if (income <= 5250)
        tax = 82.50f + (income - 3750) * .04f;
    else if (income <= 7000)
        tax = 142.50f + (income - 5250) * .05f;
    else
        tax = 230.00f + (income - 7000) * .06f;
    return tax;
}
