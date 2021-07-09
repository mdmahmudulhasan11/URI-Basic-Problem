#include <stdio.h>

int main()
{
    int x,i,j,z=0;

   while(1)
   {
        scanf("%d", &x);
        z=0;
        if(x==0) break;
        else if(x%2==1)
        {
            x++;
            for(j=1;j<=5;j++)
            {
                z+=x;
                x+=2;
            }
        }
        else
        {
            for(j=1;j<=5;j++)
            {
                z+=x;
                x+=2;
            }
        }

        printf("%d\n", z);

    }

    return 0;
}
