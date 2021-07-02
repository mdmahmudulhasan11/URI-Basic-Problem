#include<stdio.h>

int main(){

    int N, A, B, C, D, E, F, G, a, b, c, d, e, f, g;

    scanf("%d", &N);

    A = N % 100;
    a = N / 100;
    B = A % 50;
    b = A / 50;
    C = B % 20;
    c = B / 20;
    D = C % 10;
    d = C/ 10;
    E = D % 5;
    e = D / 5;
    F = E % 2;
    f = E / 2;
    G = F % 1;
    g = F / 1;

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", a);
    printf("%d nota(s) de R$ 50,00\n", b);
    printf("%d nota(s) de R$ 20,00\n", c);
    printf("%d nota(s) de R$ 10,00\n", d);
    printf("%d nota(s) de R$ 5,00\n", e);
    printf("%d nota(s) de R$ 2,00\n", f);
    printf("%d nota(s) de R$ 1,00\n", g);
	return 0;
}
