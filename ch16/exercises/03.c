// a.
struct complex
{
    double real;
    double imaginary;
};

int main()
{
    // b.
    struct complex c1, c2, c3;
}

// c.
struct complex make_complex(double real, double imaginary)
{
    struct complex p = {.real = real, .imaginary = imaginary};

    return p;
}

// d.
struct complex add_complex(struct complex p1, struct complex p2)
{
    struct complex p = {.real = p1.real + p2.real, .imaginary = p1.imaginary + p2.imaginary};

    return p;
}