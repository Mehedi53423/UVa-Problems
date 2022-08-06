#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000];
    int i;

    while(scanf("%s",a)==1)
    {
        int n = strlen(a);

        for(i=0;i<n;i++)
        {
            a[i] = a[i]-7;
        }
        printf("%s\n",a);
    }

    return 0;
}
