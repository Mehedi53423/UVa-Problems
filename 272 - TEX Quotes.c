#include<stdio.h>

int main()
{
    char a;

    char q = 34,q1 = 96,q2 = 39;

    int i,p=0;

    while(scanf("%c",&a)==1)
    {
        if(a==q && p==0)
        {
            printf("%c%c",q1,q1);
            p=1;
        }
        else if(a==q && p==1)
        {
            printf("%c%c",q2,q2);
            p=0;
        }
        else
        {
            printf("%c",a);
        }
    }

    return 0;
}
