#include<stdio.h>

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        printf("%lld\n",((n*(n+2)/2)*3)-6);
    }
    return 0;
}
