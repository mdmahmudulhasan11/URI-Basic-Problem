#include<stdio.h>

int main()
{
    int c=0;
    double a, b=0, x;

    while(1)
    {
        while(1)
        {
            scanf("%lf", &a);

            if(a>=0 && a<=10)
            {
                b = b+a;
                c++;
            }
            else
            {
                printf("nota invalida\n");
            }

            if(c==2)
            {
                c=0;
                break;
            }
        }
        printf("media = %.2lf\n", b/2);
        b=0;

        while(1)
        {
            scanf("%lf", &x);
            printf("novo calculo (1-sim 2-nao)\n");

            if(x==1 || x==2)break;
        }

        if(x==1)continue;
        else break;
    }

	return 0;
}
