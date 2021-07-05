#include<stdio.h>

int main()
{
    int N, A, i, a = 0, b = 0, c = 0, total = 0;
    char x;
    float d, e, f;

    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        scanf("%d %c", &A, &x);

        total = total + A;

        if(x == 'C')
        {
            a = a + A;
        }
        else if(x == 'R')
        {
            b = b + A;
        }
        else if(x == 'S')
        {
            c = c + A;
        }
    }
        d = (a*100.00)/total;
        e = (b*100.00)/total;
        f = (c*100.00)/total;

        printf("Total: %d cobaias\n", total);
        printf("Total de coelhos: %d\n", a);
        printf("Total de ratos: %d\n", b);
        printf("Total de sapos: %d\n", c);
        printf("Percentual de coelhos: %.2f %%\n", d);
        printf("Percentual de ratos: %.2f %%\n", e);
        printf("Percentual de sapos: %.2f %%\n", f);

	return 0;
}
