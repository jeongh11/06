#include <stdio.h>

int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void)
{
    int a = 10;
    int b = 20;
    int n = 5;

    printf("sumTwo(%d, %d) = %d\n", a, b, sumTwo(a, b));

    printf("square(%d) = %d\n", n, square(n));

    printf("get_max(%d, %d) = %d\n", a, b, get_max(a, b));

    return 0;
}

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}