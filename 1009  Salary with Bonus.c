#include<stdio.h>

int main(){

    char name[30];
    double salary, percentage;

    gets(name);
    scanf("%lf%lf", &salary,&percentage);

    percentage = (percentage * 15)/100;
    salary = salary + percentage;

    printf("TOTAL = R$ %.2lf\n",  salary);

    return 0;

}
