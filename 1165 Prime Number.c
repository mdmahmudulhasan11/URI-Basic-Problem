#include<stdio.h>

int main()
{
    int i,j,x,n,a;

    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        a=0;
        scanf("%d", &x);

        for(j=1;j<=x;j++)
        {
            if(x%j==0) a++;
        }
        if(a==2) printf("%d eh primo\n", x);
        else printf("%d nao eh primo\n", x);
    }

	return 0;
}
