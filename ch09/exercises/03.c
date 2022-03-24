int gcd(int, int);

int gcd(int m, int n) {
    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }

    return n;
}
