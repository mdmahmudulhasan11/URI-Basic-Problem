#include <stdio.h>

int main()
{
    double M[12][12],aver=0.0;
    int i,j,k=1;
    char T[2];
    gets(T);

     for(i=0;i<=11;i++)
    {
        for(j=k;j<=11;j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for(i=0;i<=11;i++)
    {
        for(j=k;j<=11;j++)
        {
            aver=aver+M[i][j];
        }
        k++;
    }

    if(T[0]=='S') printf("%.1lf", aver);
    if(T[0]=='M') printf("%.1lf", aver/66.0);

    return 0;
}
