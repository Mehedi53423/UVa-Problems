#include<stdio.h>

int main()
{
    int n,i,j,k;

    while(scanf("%d",&n)==1)
    {
        int b[n];

        for(i=0;i<n;i++)
        {
            int m,z=0;

            scanf("%d",&m);

            int a[m];

            for(j=0;j<m;j++)
            {
                scanf("%d",&a[j]);
            }

            for(j=0;j<m;j++)
            {
                for(k=j+1;k<m;k++)
                {
                    if(a[j]>a[k])
                    {
                        int p = a[j];
                        a[j] = a[k];
                        a[k] = p;
                        z++;
                    }
                }
            }
            b[i] = z;
        }

        for(i=0;i<n;i++)
        {
            printf("Optimal train swapping takes %d swaps.\n",b[i]);
        }
    }

    return 0;
}
