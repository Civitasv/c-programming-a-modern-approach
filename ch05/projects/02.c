#include "stdio.h"

int main() {
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour == 0)
        printf("Equivalent 12-hour time: 12:%.2d AM", minute);
    else if (hour < 12)
        printf("Equivalent 12-hour time: %d:%.2d AM", hour,minute);
    else if (hour == 12)
        printf("Equivalent 12-hour time: %d:%.2d PM", hour,minute);
    else
        printf("Equivalent 12-hour time: %d:%.2d PM", hour-12, minute);

    return 0;
}