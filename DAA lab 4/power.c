#include <stdio.h>

long long power(int x, int n)
{
    if (n == 0)
        return 1;

    long long half = power(x, n / 2);

    if (n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main()
{
    int x, n;

    printf("Enter base: ");
    scanf("%d", &x);

    printf("Enter power: ");
    scanf("%d", &n);

    printf("%d^%d = %lld\n", x, n, power(x, n));

    return 0;
}
