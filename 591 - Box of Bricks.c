#include<stdio.h>

int main()
{
    int n,i,j=1;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            int a[n];
            int s=0;

            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                s=s+a[i];
            }

            int p = s/n;
            int q = 0;

            for(i=0;i<n;i++)
            {
                if(a[i]>p)
                {
                    q=q+(a[i]-p);
                }
            }
            printf("Set #%d\n",j);
            printf("The minimum number of moves is %d.\n\n",q);
        }
        j++;
    }

    return 0;
}
