#include <stdio.h>

int main()
{
    float i, j;
    int a=0;

    for(i=0.0;i<2.2;i=i+0.2)
    {
        if(a==5)
            a=0;
        for(j=1;j<=3;j++)
        {
            if(a==0)
            {
                printf("I=%.0f J=%.0f\n", i, j+i);
            }
            else if(i==2.0)
            {
                printf("I=%.0f J=%.0f\n", i, j+i);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", i, j+i);
            }
        }
        a++;
    }

    return 0;
}
