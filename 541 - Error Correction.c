#include<stdio.h>

int main()
{
    int n,i,j;
    int a[4][4];
    int b[4]={0,0,0,0},c[4]={0,0,0,0};

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                b[i] = b[i] + a[i][j];
                c[i] = c[i] + a[j][i];
            }
        }

        for(i=0;i<n;i++)
        {
            printf("%d %d\n",b[i],c[i]);
        }
    }
    return 0;
}
