#include<stdio.h>

int main()
{
    int n,i,j;

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            int p;
            int s=0;
            int a[1000];

            scanf("%d",&p);

            for(j=0;j<p;j++)
            {
                scanf("%d",&a[j]);
                s=s+a[j];
            }

            float w=(float)s/p;
            int q=0;

            for(j=0;j<p;j++)
            {
                if(a[j]>w)
                {
                    q++;
                }
            }

            float m=(float)(q*100)/p;

            printf("%.3f%%\n",m);
        }
    }
    return 0;
}
