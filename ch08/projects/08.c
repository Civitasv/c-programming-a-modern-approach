#include "stdio.h"
#include "limits.h"

#define N 5

int main() {
    int score[N][N];
    int row_sum[N] = {0}, col_sum[N] = {0}, highest[N] = {0}, lowest[N] = {INT_MAX};

    for (int i = 0; i < N; i++) {
        printf("Enter scores of student %d: ", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &score[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            row_sum[i] += score[i][j];
        }
    }

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            col_sum[j] += score[i][j];
            highest[j] = score[i][j] > highest[j] ? score[i][j] : highest[j];
            lowest[j] = score[i][j] < lowest[j] ? score[i][j] : lowest[j];
        }
    }

    for (int i = 0; i < N; i++) {
        printf("The total score of student %d is %d\n", i + 1, row_sum[i]);
        printf("The average score of student %d is %f\n", i + 1, row_sum[i] / 5.0);
    }

    printf("\n");

    for (int j = 0; j < N; j++) {
        printf("The average score of exam %d is %f\n", j + 1, col_sum[j] / 5.0);
        printf("The highest score of exam %d is %d\n", j + 1, highest[j]);
        printf("The lowest score of exam %d is %d\n", j + 1, lowest[j]);
    }

    return 0;
}