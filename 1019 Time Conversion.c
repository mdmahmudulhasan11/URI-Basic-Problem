#include<stdio.h>

int main(){

    int N, a, b, c, HOURS,  MINITES, SECONDS;

    scanf("%d",&N);

    a = N % 3600;
    b = a % 60;
    c = b % 1;

    HOURS = N / 3600;
    MINITES = a / 60;
    SECONDS = b / 1;

    printf("%d:%d:%d\n", HOURS,MINITES,SECONDS);

	return 0;
}
