#include<stdio.h>

int main()
{
    int n,row,col,i,j,x;

    while(1){
    scanf("%d",&n);
    if(n==0){
    break;
    }
    i=0,x=1;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
        if(row-col==i)j=x;
        if(row-col>=x)j=row-col+1;
        if(col-row>=x)j=col-row+1;
        printf("%3d",j);
        if(col<n)printf(" ");
        else printf("\n");
        }
    }
    printf("\n");
    }

    return 0;
}
