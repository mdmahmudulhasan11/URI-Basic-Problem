#include<stdio.h>

int main(){

    int N, a, b, c, year, month, day;

    scanf("%d",&N);

    a = N % 365;
    b = a % 30;
    c = b % 1;

    year = N / 365;
    month = a / 30;
    day = b / 1;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);
	return 0;
}
