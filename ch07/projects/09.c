#include <ctype.h>
#include "stdio.h"

int main() {
    int hour, minute;
    char hint;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &hint);

    hour = hour == 12 ? 0 : hour;
    switch (toupper(hint)) {
        case 'A':
            printf("Equivalent 24-hour time: ");
            printf("%d:%d", hour, minute);
            break;
        case 'P':
            printf("Equivalent 24-hour time: ");
            printf("%d:%d", (hour + 12), minute);
            break;
        default:
            printf("INVALID TIME");
            break;
    }

    return 0;
}
