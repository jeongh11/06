#include <stdio.h>

int get_integer(void);
int factorial(int n);
int combination(int n, int r);

int main(void)
{
    int n, r;
    int result;

    n = get_integer();

    r = get_integer();

    result = combination(n, r);

    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}
int get_integer(void)
{
    int value;

    printf("정수를 입력하세요: ");
    scanf("%d", &value);

    return value;
}
int factorial(int n)
{
    int res = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        res = res * i;
    }

    return res;
}
int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}