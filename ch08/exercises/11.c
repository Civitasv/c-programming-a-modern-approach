#define N 8

int main() {
    char checker_board[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i + j) % 2 == 0)
                checker_board[i][j] = 'B';
            else checker_board[i][j] = 'R';
        }
    }

    return 0;
}