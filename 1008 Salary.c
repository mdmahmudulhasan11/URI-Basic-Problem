#include<stdio.h>

int main(){
    int A, B;
    float SALARY;

    scanf("%d%d%f", &A,&B,&SALARY);

    SALARY = SALARY * B;

    printf("NUMBER = %d\n", A);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}
