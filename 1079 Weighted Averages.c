#include<stdio.h>

int main()
{
    int N, i;
    float a, b, c, x;

    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        x = ((a*2.0)+(b*3.0)+(c*5.0))/10.0;

        printf("%.1f\n", x);
    }

	return 0;
}
