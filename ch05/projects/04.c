#include "stdio.h"

int main() {
    int wind_speed;

    printf("请输入风速(海里/小时): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1)
        printf("Calm");
    else if (wind_speed <= 3)
        printf("Light air");
    else if (wind_speed <= 27)
        printf("Breeze");
    else if (wind_speed <= 47)
        printf("Gale");
    else if (wind_speed <= 63)
        printf("Storm");
    else
        printf("Hurricane");

    return 0;
}