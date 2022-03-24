#include <stdlib.h>
#include <time.h>
#include "stdio.h"
#include "stdbool.h"

int roll_dice(void);

bool play_game(void);

int main() {
    int win = 0, lose = 0;
    char tag;
    srand((unsigned) time(NULL));

    while (1) {
        bool is_win = play_game();
        if (is_win) {
            printf("You win!\n");
            win++;
        } else {
            printf("You lose!\n");
            lose++;
        }

        printf("Play again?");
        scanf("%c", &tag);
        if (tag != 'y' && tag != 'Y') {
            break;
        }
    }

    printf("Wins: %d   Loses: %d \n", win, lose);

    return 0;
}

int roll_dice() {
    int first = rand() % 6 + 1;
    int second = rand() % 6 + 1;

    return first + second;
}

bool play_game() {
    int point = roll_dice(), num;
    printf("You rolled: %d\n", point);
    if (point == 7 || point == 11)
        return true;
    if (point == 2 || point == 3 || point == 12)
        return false;
    printf("Your point is %d\n", point);

    while ((num = roll_dice())) {
        printf("You rolled: %d\n", num);
        if (num == 7) {
            return false;
        }
        if (num == point) {
            return true;
        }
    }
}