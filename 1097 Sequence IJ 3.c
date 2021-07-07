#include <stdio.h>

int main()
{
    int a=1, b=7, k=0;

    while(1)
    {
        printf("I=%d J=%d\n", a, b);
        k++;
        b-=1;

        if(k == 3)
        {
            a+=2;
            b+=5;
            k=0;
        }

         if(a > 10)
        {
            break;
        }
    }

    return 0;
}
