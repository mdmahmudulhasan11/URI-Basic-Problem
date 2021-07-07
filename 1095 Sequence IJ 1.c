#include<stdio.h>

int main()
{
    int i = 1, j = 60;

    while(1)
    {
       printf("I=%d J=%d\n", i, j);
       if(j == 0)
        {
           break;
        }

       i = i + 3;
       j = j - 5;
    }

	return 0;
}
