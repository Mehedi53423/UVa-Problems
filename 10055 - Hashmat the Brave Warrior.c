#include<stdio.h>
#include<math.h>

int main()
{
    long long int a;
    long long int b;

    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        long long int c = abs(a-b);
        printf("%lld\n",c);
    }

    return 0;
}
