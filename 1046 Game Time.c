#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    scanf("%d %d %d %d", &a, &c, &b, &d);

    e = ((b*60)+d) - ((a*60)+c);

    if(e<=0)
    {
        e += 24*60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", e/60, e%60);

    return 0;
}
