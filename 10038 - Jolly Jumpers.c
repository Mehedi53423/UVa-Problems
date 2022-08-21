#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,a[3000],b[3000];

    while(scanf("%d",&n)==1)
    {
        int s=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n-1;i++)
        {
            b[i] = abs(a[i+1]-a[i]);
        }

        for(i=0;i<n-1;i++)
        {
            for(j=i;j<n-1;j++)
            {
                if(b[i]>b[j])
                {
                    int t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
            }
        }

        for(i=1;i<n;i++)
        {
            if(b[i]==b[i-1])
            {
                s=1;
                break;
            }
        }

        if(s==0)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }

    return 0;
}
