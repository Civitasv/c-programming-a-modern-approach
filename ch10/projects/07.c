#include "stdio.h"

#define MAX_DIGITS 10

/* external variables */
/* 7-segment representations for digits 0-9:
 *
 *    _0_
 * 5 |   | 1
 *   |_6_|
 * 4 |   | 2
 *   |_3_|
 */
const int segments[MAX_DIGITS][7] = {{1, 1, 1, 1, 1, 1, 0},
                                     {0, 1, 1, 0, 0, 0, 0},
                                     {1, 1, 0, 1, 1, 0, 1},
                                     {1, 1, 1, 1, 0, 0, 1},
                                     {0, 1, 1, 0, 0, 1, 1},
                                     {1, 0, 1, 1, 0, 1, 1},
                                     {1, 0, 1, 1, 1, 1, 1},
                                     {1, 1, 1, 0, 0, 0, 0},
                                     {1, 1, 1, 1, 1, 1, 1},
                                     {1, 1, 1, 1, 0, 1, 1}};

const int location[7][2] = {{0, 1},
                            {1, 2},
                            {2, 2},
                            {2, 1},
                            {2, 0},
                            {1, 0},
                            {1, 1}};

char digits[3][4 * MAX_DIGITS];

void clear_digits_array();

void process_digit(int, int);

void printf_digits_array();

int main() {
    char ch;
    int pos = 0;
    printf("Enter a number: ");
    clear_digits_array();
    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            process_digit(ch - '0', pos++);
        }
    }
    process_digit(5, 1);
    printf("\n");
    printf_digits_array();
    return 0;
}

void clear_digits_array() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4 * MAX_DIGITS; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position) {
    int row, col;

    for (int i = 0; i < 7; i++) {
        if (segments[digit][i]) {
            row = location[i][0];
            col = location[i][1] + position * 4;
            digits[row][col] = i % 3 == 0 ? '_' : '|';
        }
    }
}

void printf_digits_array() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4 * MAX_DIGITS; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}
