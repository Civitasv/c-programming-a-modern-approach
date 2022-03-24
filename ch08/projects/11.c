#include "stdio.h"

int main() {
    char ch;
    char phone[15] = {0};
    int i = 0;

    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            if (ch <= 'C')
                phone[i++] = '2';
            else if (ch <= 'F')
                phone[i++] = '3';
            else if (ch <= 'I')
                phone[i++] = '4';
            else if (ch <= 'L')
                phone[i++] = '5';
            else if (ch <= 'O')
                phone[i++] = '6';
            else if (ch <= 'S')
                phone[i++] = '7';
            else if (ch <= 'V')
                phone[i++] = '8';
            else if (ch <= 'Z')
                phone[i++] = '9';
        } else
            phone[i++] = ch;
    }

    printf("In numeric form: ");
    for (int i = 0; i < (int) (sizeof phone / sizeof phone[0]); i++)
        if (phone[i] != 0)
            printf("%c", phone[i]);

    return 0;
}
