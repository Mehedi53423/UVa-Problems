#include<stdio.h>

int main()
{
    int n,i,j,k,l;

    while(scanf("%d",&n)==1)
    {
        int a[n];
        int b[n];

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            scanf("%d",&b[i]);
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<b[i];j++)
            {
                int c = (a[i]*2)-1;
                int p=1;

                for(k=0;k<c;k++)
                {
                    if(k+1>a[i])
                    {
                        for(l=0;l<=k-p-1;l++)
                        {
                            printf("%d",k-p);
                        }
                        printf("\n");
                        p=p+2;
                    }
                    else
                    {
                        for(l=0;l<=k;l++)
                        {
                            printf("%d",k+1);
                        }
                        printf("\n");
                    }
                }
                if(j<b[i]-1)
                {
                    printf("\n");
                }
            }
            if(i<n-1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
