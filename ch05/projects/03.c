#include "stdio.h"

int main() {
    float commission, per_share, value;
    int shares;
    printf("Enter numbers of share: ");
    scanf("%d", &shares);
    printf("Enter value of per share: ");
    scanf("%f", &per_share);

    value = shares * per_share;

    if (value < 2500.00f)
        commission = 20.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);

    if (shares < 2000)
        printf("Commission of the contest: $%.2f\n", 33.0f + .03f * shares);
    else
        printf("Commission of the contest: $%.2f\n", 33.0f + .02f * shares);
    return 0;
}