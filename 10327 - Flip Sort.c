#include<stdio.h>

int main()
{
    int n,i,j;

    while(scanf("%d",&n)!= EOF)
    {
        int a[n];
        int k=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    k++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",k);
    }

    return 0;
}
