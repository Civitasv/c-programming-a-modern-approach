int evaluate_position(char **board)
{
    int black = 0, white = 0;
    char *ptr;
    for (ptr = &board[0][0]; ptr <= &board[7][7]; ptr++)
    {
        switch (*ptr)
        {
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
    return white - black;
}