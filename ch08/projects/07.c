#include "stdio.h"

#define N 5

int main() {
    int arr[N][N];
    int row_sum[N] = {0}, col_sum[N] = {0};

    for (int i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            row_sum[i] += arr[i][j];
        }
    }

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++)
            col_sum[j] += arr[i][j];
    }

    printf("Row totals: ");

    for (int i = 0; i < N; i++)
        printf(" %d", row_sum[i]);

    printf("\n");
    printf("Column totals: ");

    for (int j = 0; j < N; j++)
        printf(" %d", col_sum[j]);

    return 0;
}