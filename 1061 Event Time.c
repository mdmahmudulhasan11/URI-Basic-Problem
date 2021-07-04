#include <stdio.h>
int main()
{
    int a, a1, b, b1, c, c1, d, d1;

    scanf("Dia %d",&a);
    scanf("%d : %d : %d\n",&b,&c,&d);
    scanf("Dia %d",&a1);
    scanf("%d : %d : %d",&b1,&c1,&d1);

    d = d1 - d;
    c = c1 - c;
    b = b1 - b;
    a = a1 - a;

    if(d<0){
        d+=60;
        c--;
    }

    if(c<0){
        c+=60;
        b--;
    }

    if(b<0){
        b+=24;
        a--;
    }

    printf("%d dia(s)\n", a);
    printf("%d hora(s)\n", b);
    printf("%d minuto(s)\n", c);
    printf("%d segundo(s)\n", d);


 return 0;
}
