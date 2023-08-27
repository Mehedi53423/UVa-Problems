#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i;

    while(scanf("%[^\n]s",a)==1)
    {
        int n = strlen(a);

        for(i=0;i<n;i++)
        {
            if(a[i]==']')
            {
                printf("p");
            }
            else if(a[i]=='[')
            {
                printf("o");
            }
            else if(a[i]=='p' || a[i]=='P')
            {
                printf("i");
            }
            else if(a[i]=='o' || a[i]=='O')
            {
                printf("u");
            }
            else if(a[i]=='i' || a[i]=='I')
            {
                printf("y");
            }
            else if(a[i]=='u' || a[i]=='U')
            {
                printf("t");
            }
            else if(a[i]=='y' || a[i]=='Y')
            {
                printf("r");
            }
            else if(a[i]=='t' || a[i]=='T')
            {
                printf("e");
            }
            else if(a[i]=='r' || a[i]=='R')
            {
                printf("w");
            }
            else if(a[i]=='e' || a[i]=='E')
            {
                printf("q");
            }
            else if(a[i]=='\\')
            {
                printf(";");
            }
            else if(a[i]=='\'')
            {
                printf("l");
            }
            else if(a[i]==';')
            {
                printf("k");
            }
            else if(a[i]=='l' || a[i]=='L')
            {
                printf("j");
            }
            else if(a[i]=='k' || a[i]=='K')
            {
                printf("h");
            }
            else if(a[i]=='j' || a[i]=='J')
            {
                printf("g");
            }
            else if(a[i]=='h' || a[i]=='H')
            {
                printf("f");
            }
            else if(a[i]=='g' || a[i]=='G')
            {
                printf("d");
            }
            else if(a[i]=='f' || a[i]=='F')
            {
                printf("s");
            }
            else if(a[i]=='d' || a[i]=='D')
            {
                printf("a");
            }
            else if(a[i]=='/')
            {
                printf(",");
            }
            else if(a[i]=='.')
            {
                printf("m");
            }
            else if(a[i]==',')
            {
                printf("n");
            }
            else if(a[i]=='m' || a[i]=='M')
            {
                printf("b");
            }
            else if(a[i]=='n' || a[i]=='N')
            {
                printf("v");
            }
            else if(a[i]=='b' || a[i]=='B')
            {
                printf("c");
            }
            else if(a[i]=='v' || a[i]=='V')
            {
                printf("x");
            }
            else if(a[i]=='c' || a[i]=='C')
            {
                printf("z");
            }
            else if(a[i]==' ')
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
