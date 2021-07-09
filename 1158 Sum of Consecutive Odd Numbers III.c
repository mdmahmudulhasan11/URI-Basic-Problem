#include <stdio.h>

int main()
{
    int n,i,j,x,y,z=0;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d", &x,&y);
        z=0;

        if(x%2==1)
        {
            for(j=1;j<=y;j++)
            {
                z+=x;
                x+=2;
            }
        }
        else
        {
            x++;

            for(j=1;j<=y;j++)
            {
                z+=x;
                x+=2;
            }
        }

            printf("%d\n", z);

    }

    return 0;
}
