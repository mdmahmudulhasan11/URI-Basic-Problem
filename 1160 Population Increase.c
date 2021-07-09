#include<stdio.h>

int main()
{
    int t,i,a,b,c=0;
    double pa,pb;
    scanf("%d", &t);

    for(i=1;i<=t;i++)
    {
        c=0;
        scanf("%d %d %lf %lf", &a,&b,&pa,&pb);

        while(a<=b)
        {

            a*=(pa/100.00)+1.0;
            b*=(pb/100.00)+1.0;
            c++;

            if(c>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }

        }
        if(c<=100) printf("%d anos.\n", c);
    }

	return 0;
}
