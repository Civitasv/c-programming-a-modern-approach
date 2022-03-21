#include "stdio.h"

int main() {
    int income;
    float tax;

    printf("请输入需纳税的收入: ");
    scanf("%d", &income);

    printf("需要缴纳税金: ")
    if (income <= 750)
        tax = .01f * incode;
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

    printf("%f", tax);

    return 0;
}