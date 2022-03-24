int digit(int, int);

int digit(int n, int k) {
    int digit, count = 0;
    while (n != 0) {
        digit = n % 10;
        count += 1;
        if (k == count)
            return digit;
        n /= 10;
    }
    return 0;
}