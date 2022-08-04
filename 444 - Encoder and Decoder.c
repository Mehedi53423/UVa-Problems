#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i;

    while(scanf("%[^\n]",a)==1)
    {
        getchar();
        printf("%s\n",a);

        int n=strlen(a);
        printf("%d\n",n);

        for(i=0;i<n/2;i++)
        {
            char b =a[i];
            a[i] = a[n-1-i];
            a[n-1-i] = b;
        }

        printf("%s\n",a);

        //if(a[0]>='0'&&a[0]<='9')
        //{
        int p = a-'0';

        printf("%c",p);

        //}
    }

    return 0;
}
