#include<stdio.h>

int main(){

    float a;

    scanf("%f", &a);

    if(a < 0 || a > 100){     //implementing the above logic

    printf("Fora de intervalo\n");

    }

    else{

    if(a >= 0 && a <= 25){

    printf("Intervalo [0,25]\n");

    }

    else if(a > 25 && a <= 50){

    printf("Intervalo (25,50]\n");
    }

    else if(a > 50 && a <= 75){

    printf("Intervalo (50,75]\n");

    }
    else{


    printf("Intervalo (75,100]\n");
    }


    }


 return 0;


}
