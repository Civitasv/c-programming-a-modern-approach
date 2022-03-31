#include <stdio.h>

int main()
{
    int day, month, year;
    const char *months[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %s %.2d, %d", months[month - 1], day, year);
    return 0;
}