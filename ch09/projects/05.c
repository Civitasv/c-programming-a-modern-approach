#include "stdio.h"

void create_magic_square(int n, char [n][n]);

void print_magic_square(int n, char[n][n]);

int main() {
    int n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char arr[n][n];
    create_magic_square(n, arr);
    print_magic_square(n, arr);
    return 0;
}

void create_magic_square(int n, char arr[n][n]) {
    int i, j, k, next_i, next_j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            arr[i][j] = 0;

    i = 0, j = n / 2;
    arr[i][j] = 1;
    for (k = 2; k <= n * n; k++) {
        next_i = i - 1 < 0 ? n - 1 : i - 1;
        next_j = j + 1 >= n ? 0 : j + 1;
        if (arr[next_i][next_j] == 0) {
            i = next_i;
            j = next_j;
            arr[i][j] = k;
        } else {
            i = i + 1;
            arr[i][j] = k;
        }
    }
}

void print_magic_square(int n, char arr[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d  ", arr[i][j]);
        }
        printf("\n");
    }
}
