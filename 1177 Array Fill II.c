#include<stdio.h>

int main()
{
    int i,j,t,n[1000];
    scanf("%d", &t);

    for(i=0,j=0;i<1000;i++,j++)
    {
        n[i]=j;

        if(j==t)
        {
            j=0;
        }

        printf("N[%d] = %d\n", i,j);
    }

    return 0;
}

