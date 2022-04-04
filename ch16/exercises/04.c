// a.
typedef struct
{
    double real;
    double imaginary;
} Complex;

int main()
{
    // b.
    Complex c1, c2, c3;
}

// c.
Complex make_complex(double real, double imaginary)
{
    Complex p = {.real = real, .imaginary = imaginary};

    return p;
}

// d.
Complex add_complex(Complex p1, Complex p2)
{
    Complex p = {.real = p1.real + p2.real, .imaginary = p1.imaginary + p2.imaginary};

    return p;
}