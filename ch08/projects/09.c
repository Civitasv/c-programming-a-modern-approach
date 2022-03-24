#include <stdlib.h>
#include <time.h>
#include "stdio.h"
#include "stdbool.h"

#define N 10

bool overstep(int i, int j);

int main() {
    char chrs[N][N] = {'A'};
    char letter = 'A';
    int i = 0, j = 0;
    bool up, down, left, right;
    time_t t;
    srand((unsigned) time(&t));

    while (letter <= 'Z') {
        up = down = left = right = false;
        if (!overstep(i, j + 1) && chrs[i][j + 1] == 0) // right
            right = true;
        if (!overstep(i, j - 1) && chrs[i][j - 1] == 0) // left
            left = true;
        if (!overstep(i - 1, j) && chrs[i - 1][j] == 0) // up
            up = true;
        if (!overstep(i + 1, j) && chrs[i + 1][j] == 0) // down
            down = true;
        if (!right && !left && !up && !down)
            break;

        int direction = rand() % 4;
        switch (direction) {
            case 0:
                if (right) {
                    chrs[i][++j] = ++letter;
                }
                break;
            case 1:
                if (left) {
                    chrs[i][--j] = ++letter;
                }
                break;
            case 2:
                if (up) {
                    chrs[--i][j] = ++letter;
                }
                break;
            case 3:
                if (down) {
                    chrs[++i][j] = ++letter;
                }
                break;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (chrs[i][j] == 0)
                printf(". ");
            else printf("%c ", chrs[i][j]);
        }
        printf("\n");
    }
    return 0;
}

bool overstep(int i, int j) {
    return i >= N || i < 0 || j >= N || j < 0;
}