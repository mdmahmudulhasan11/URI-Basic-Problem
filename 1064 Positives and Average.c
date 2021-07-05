#include<stdio.h>

int main()
{
    float a[7],aver;
    int i, count = 0;

    for(i = 0;i<6;i++)
    {
        scanf("%f", &a[i]);

        if(a[i]>0)
        {
            aver = aver + a[i];
            count++;
        }
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", aver/count);

	return 0;
}
