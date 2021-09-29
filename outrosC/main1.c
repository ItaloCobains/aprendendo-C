#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome_do_cliente[40];
    float valor, mil, calculo;

    mil = 1.000,00;
/*var*/
    printf("Qual seu nome ? \n");
    scanf("%s", &nome_do_cliente);
    printf("Qual o valor de suas compras no ano passado? \n");
    scanf("%f", valor);

    if (valor<=mil){
        calculo = valor * 0,10;

        return calculo;
    }else{
        calculo = valor * 0,15;
        return calculo; 
    }

    printf("Ola %s, seu bonus foi de: %f", nome_do_cliente, calculo);

    system("PAUSE");

    return 0;
}