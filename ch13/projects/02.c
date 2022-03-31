#include <string.h>
#include <stdio.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);
int main()
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char date_str[15], msg_str[MSG_LEN + 1];
    int month, day, hour, minute, second, i, j, num_remind = 0;

    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day(mm/dd hh:MM:ss) and reminder: ");
        scanf("%2d/%2d %2d:%2d:%2d", &month, &day, &hour, &minute, &second);
        if (day == 0 || month == 0)
            break;

        if (month < 0 || month > 12)
        {
            printf("INVALID -- month out of range 1-12; try again --\n");
            while (getchar() != '\n')
                ;
            continue;
        }
        if (day < 0 || day > 31)
        {
            printf("INVALID -- day out of range 1-31; try again --\n");
            while (getchar != '\n')
                ;
            continue;
        }

        sprintf(date_str, "%2.2d/%2.2d %2.2d:%2.2d:%2.2d", month, day, hour, minute, second);

        read_line(msg_str, MSG_LEN);
        for (i = 0; i < num_remind; i++)
            if (strcmp(date_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        strcpy(reminders[i], date_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");

    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';

    return i;
}