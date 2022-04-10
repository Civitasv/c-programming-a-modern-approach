// a. 函数 f 具有两个参数，第一个参数是指向以 long 为参数，
//    以 float 为返回值的函数的指针，第二个参数是 char *，
//    该函数返回指向以 double 为参数，以 int 为返回值的函数
//    的指针。

// b.
float func_b(long a)
{
    return 2.0;
}
int y(double a)
{
    return 1;
}

int (*f(float (*x)(long c), char *y))(double a)
{
    return &y;
}

char ch;

int main()
{
    int n = (*f(func_b, &ch))(3.14);
}