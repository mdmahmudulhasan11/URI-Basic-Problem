#include<stdio.h>

int main(){

    float A, B, C;
    double pi = 3.14159, a, b, c, d, e;

    scanf("%f%f%f", &A,&B,&C);

    a = .5 * A * C;
    b = pi * (C * C);
    c = (A+B)/2 * C;
    d = B * B;
    e = A * B;

    printf("TRIANGULO: %.3lf\n", a);
    printf("CIRCULO: %.3lf\n", b);
    printf("TRAPEZIO: %.3lf\n", c);
    printf("QUADRADO: %.3lf\n", d);
    printf("RETANGULO: %.3lf\n", e);

	return 0;
}
