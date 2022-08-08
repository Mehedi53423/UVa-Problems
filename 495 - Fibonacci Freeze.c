#include<stdio.h>

long long int fib(long long int n)
{
    int f[n+1];
    int i;

    f[0] = 0;
    f[1] = 1;

    for (i=2;i<=n;i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}

int main()
{
    long long int f;

    while(scanf("%lld",&f))
    {
        printf("%lld\n",fib(f));
    }

    return 0;
}
