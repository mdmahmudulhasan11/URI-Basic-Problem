#include<stdio.h>

int main()
{
    int a[7], i, count = 0;

    for(i = 0;i<5;i++)
    {
        scanf("%d", &a[i]);

        if(a[i]%2==0)
        {
            count++;
        }
    }

    printf("%d valores pares\n", count);

	return 0;
}
