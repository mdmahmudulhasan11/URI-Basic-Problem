#include <stdio.h>

int main()
{
    int N, x, y, i, j, temp, c=0;

    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        c=0;
        scanf("%d %d", &x, &y);

        if(x==y)
        {
            printf("%d\n", c);
        }
        else if(x>y)
        {
            temp = x;
            x = y;
            y = temp;

            for(j=x+1;j<y;j++)
            {
                if(j%2 != 0)
                {
                   c=c+j;
                }
            }
            printf("%d\n", c);
        }
        else
        {
         for(j=x+1;j<y;j++)
            {
                if(j%2 != 0)
                {
                   c=c+j;
                }
            }
            printf("%d\n", c);
        }

    }

    return 0;
}
