int evaluate_position(char [8][8]);

int evaluate_position(char board[8][8]) {
    int black = 0, white = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            switch (board[i][j]) {
                case 'Q':
                    white += 9;
                    break;
                case 'q':
                    black += 9;
                    break;
                case 'R':
                    white += 5;
                    break;
                case 'r':
                    black += 5;
                    break;
                case 'B':
                    white += 3;
                    break;
                case 'b':
                    black += 3;
                    break;
                case 'N':
                    white += 3;
                    break;
                case 'n':
                    black += 3;
                    break;
                case 'P':
                    white++;
                    break;
                case 'p':
                    black++;
                    break;
                default:
                    break;
            }
        }
    }
    return white - black;
}