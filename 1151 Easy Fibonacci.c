#include<stdio.h>

int main()
{
    int n,i,first=0,second=1,temp;
    scanf("%d", &n);

    for(i=1;i<n;i++)
   {
       printf("%d ", first);

       temp=first;
       first=second;
       second=second+temp;
   }
   printf("%d\n", first);

    return 0;
}
