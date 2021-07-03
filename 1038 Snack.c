#include<stdio.h>

int main(){

    int code,amound;
    float total;

    scanf("%d%d", &code,&amound);

    if(code == 1){
        total = amound * 4.00;
        printf("Total: R$ %.2f\n", total);
    }
    if(code == 2){
        total = amound * 4.50;
        printf("Total: R$ %.2f\n", total);
    }
    if(code == 3){
        total = amound * 5.00;
        printf("Total: R$ %.2f\n", total);
    }
    if(code == 4){
        total = amound * 2.00;
        printf("Total: R$ %.2f\n", total);
    }
    if(code == 5){
        total = amound * 1.50;
        printf("Total: R$ %.2f\n", total);
    }
	return 0;
}
