#include <stdio.h>
#include<math.h>

int main()
{
   int N, i, a;
   scanf("%d", &N);

   for(i = 1; i <= N;i++)
   {
       if(i%2==0)
       {
            a = pow(i,2);
            printf("%d^2 = %d\n", i, a);
       }
   }

    return 0;
}
