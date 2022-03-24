#include <stdlib.h>
#include <time.h>
#include "stdio.h"
#include "stdbool.h"

#define N 10

void generate_random_walk(char [N][N]);

void print_array(char [N][N]);

bool overstep(int i, int j);

int main() {
    char chrs[N][N];
    char letter = 'A';
    int i = 0, j = 0;
    bool up, down, left, right;
    time_t t;
    srand((unsigned) time(&t));

    generate_random_walk(chrs);
    chrs[i][j] = 'A';
    while (letter < 'Z') {
        up = down = left = right = false;
        if (!overstep(i, j + 1) && chrs[i][j + 1] == '.') // right
            right = true;
        if (!overstep(i, j - 1) && chrs[i][j - 1] == '.') // left
            left = true;
        if (!overstep(i - 1, j) && chrs[i - 1][j] == '.') // up
            up = true;
        if (!overstep(i + 1, j) && chrs[i + 1][j] == '.') // down
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

    print_array(chrs);
    return 0;
}

bool overstep(int i, int j) {
    return i >= N || i < 0 || j >= N || j < 0;
}

void generate_random_walk(char arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            arr[i][j] = '.';
    }
}

void print_array(char arr[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}
