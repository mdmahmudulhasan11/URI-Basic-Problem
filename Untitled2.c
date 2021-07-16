#include<stdio.h>

int main()
{
    int a,i,j,x,n;

    while(1)
    {
        scanf("%d", &n);

        if(n==0) break;
        else
        {
            for(i=1;i<=n;i++)
            {
                x=0;
                for(j=1;j<=n;j++)
                {
                    x=i;
                    if(x>j) x=j;
                    if(n-i+1<x) x=n-i+1;
                    if(n-j+1<x) x=n-j+1;
                    printf("%3d", x);

                    if(j<n) printf(" ");
                    else printf("\n");
                }
            }
        }
    }

    return 0;
}
