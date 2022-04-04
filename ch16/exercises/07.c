struct fraction
{
    int numerator;
    int denominator;
};

int gcd(int a, int b)
{
    while (a != 0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }

    return b;
}

struct fraction simplify_fraction(struct fraction f)
{
    int f_gcd = gcd(f.denominator, f.numerator);
    return (struct fraction){.numerator = f.numerator / f_gcd, .denominator = f.denominator / f_gcd};
}

struct fraction add_fractions(struct fraction f1, struct fraction f2)
{
    return simplify_fraction(
        (struct fraction){f1.numerator * f2.denominator + f2.numerator * f1.denominator,
                          f1.denominator * f2.denominator});
}

struct fraction substract_fractions(struct fraction f1, struct fraction f2)
{
    return simplify_fraction(
        (struct fraction){f1.numerator * f2.denominator - f2.numerator * f1.denominator,
                          f1.denominator * f2.denominator});
}

struct fraction multiply_fractions(struct fraction f1, struct fraction f2)
{
    return simplify_fraction(
        (struct fraction){f1.numerator * f2.numerator,
                          f1.denominator * f2.denominator});
}

struct fraction divide_fractions(struct fraction f1, struct fraction f2)
{
    return simplify_fraction(
        (struct fraction){f1.numerator * f2.denominator,
                          f1.denominator * f2.numerator});
}