#include "stdio.h"

int main() {
    int hour, minute, value;
    int flight_start[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int flight_end[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int start_hour, start_minute, end_hour, end_minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    value = hour * 60 + minute;

    printf("Closest departure time is ");
    for (int i = 0; i < (int) (sizeof flight_start / sizeof flight_start[0]) - 1; i++) {
        if (value < flight_start[i] + (flight_start[i + 1] - flight_start[i]) / 2) {
            start_hour = flight_start[i] / 60 > 12 ? flight_start[i] / 60 - 12 : flight_start[i] / 60;
            start_minute = flight_start[i] % 60;

            end_hour = flight_end[i] / 60 > 12 ? flight_end[i] / 60 - 12 : flight_end[i] / 60;
            end_minute = flight_end[i] % 60;

            printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.",
                   start_hour, start_minute, flight_start[i] / 60 >= 12 ? 'p' : 'a', end_hour, end_minute,
                   flight_end[i] / 60 >= 12 ? 'p' : 'a');
            return 0;
        }
    }
    start_hour = flight_start[7] / 60 > 12 ? flight_start[7] / 60 - 12 : flight_start[7] / 60;
    start_minute = flight_start[7] % 60;

    end_hour = flight_end[7] / 60 > 12 ? flight_end[7] / 60 - 12 : flight_end[7] / 60;
    end_minute = flight_end[7] % 60;

    printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.",
           start_hour, start_minute, flight_start[7] / 60 >= 12 ? 'p' : 'a', end_hour, end_minute,
           flight_end[7] / 60 >= 12 ? 'p' : 'a');
    return 0;
}
