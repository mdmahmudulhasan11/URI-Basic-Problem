#include<stdio.h>

int main()
{
    int n,i,a=1;
    scanf("%d",&n);

    for(i=1;i<n;i++) a=a*(n-i);

    printf("%d\n", a*n);

    return 0;
}
