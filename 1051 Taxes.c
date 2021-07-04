#include <stdio.h>

int main()
{
    double A;
    scanf("%lf", &A);

    if(A <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (A >= 2000.01 && A <= 3000.00)
    {
          printf("R$ %.2f\n", (A - 2000.00)*0.08);
    }
    else if (A >= 3000.01 && A <= 4500.00)
    {
          printf("R$ %.2f\n", ((A - 3000.00)*0.18 + 1000.00*0.08));
    }
    else if (A >= 4500.01)
    {
          printf("R$ %.2f\n", ((A - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }

    return 0;
}
