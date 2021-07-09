#include <stdio.h>

int main()
{
    double a,b,S=0;

    for(a=1; a<=100; a++)
    {
        b=1/a;
        S+=b;
    }
    printf("%.2lf\n",S);

    return 0;
}
