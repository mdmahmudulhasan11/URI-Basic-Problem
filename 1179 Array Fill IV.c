#include<stdio.h>
int main()
{
    int i,j,n,a[5],b[5],even=0,odd=0;

    for(i=0;i<15;i++)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            a[even]=n;
            even++;
            if(even==5)
            {
                for(j=0;j<5;j++)
                {
                    printf("par[%d] = %d\n", j,a[j]);
                    a[j]=0;
                    even=0;
                }
            }
        }
        else
        {
            b[odd]=n;
            odd++;
            if(odd==5)
            {
                for(j=0;j<5;j++)
                {
                    printf("impar[%d] = %d\n", j,b[j]);
                    b[j]=0;
                    odd=0;
                }
            }
        }

    }
    for(j=0;j<=5;j++)
    {
        if(b[j]==0) break;
        printf("impar[%d] = %d\n",j,b[j]);
    }
    for(j=0;j<=5;j++)
    {
        if(a[j]==0) break;
        printf("par[%d] = %d\n",j,a[j]);
    }

    return 0;
}
