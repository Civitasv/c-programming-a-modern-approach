#include "stdio.h"

int main() {
    int days, start_week_day;

    printf("Enter number of days in month:");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat):");
    scanf("%d", &start_week_day);

    // white spaces
    for (int i = 0; i < start_week_day - 1; i++) {
        printf("   ");
    }
    for (int i = 0; i < days; i++) {
        printf("%3d", i + 1);
        if ((i + start_week_day) % 7 == 0)
            printf("\n");
    }

    return 0;
}