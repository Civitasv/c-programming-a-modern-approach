#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day) {
    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i = 0;
    while (day_of_year > num_days[i]) {
        day_of_year -= num_days[i];
        if (year % 4 == 0 && i == 1)
            day_of_year -= 1;
        i++;
    }
    *month = i + 1;
    *day = day_of_year;
}

int main() {
    int month, day;
    split_date(38, 2010, &month, &day);
    printf("%d %d", month, day);
    return 0;
}