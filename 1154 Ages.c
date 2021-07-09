#include<stdio.h>

int main()
{
    int a,c=0;
    float b=0;

    while(1)
    {
        scanf("%d", &a);

        if(a<0) break;
        else
            b+=a;
            c++;
    }
    printf("%.2f\n", b/c);

    return 0;
}
