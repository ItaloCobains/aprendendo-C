#include<stdio.h>
int num,soma,contador;
main()
{
    contador =0;
    soma =0;
    do{
        printf("Digite 1 numero ");
        scanf("%d", &num);
        soma = soma + num;
        contador++;
    }while(contador<=3);
    printf("A soma e: %d",soma);
}