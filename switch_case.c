#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Escolha um dia da semana: \n");
    scanf('%d', &num);

    switch(num){
        case 1: 
            printf("Domingo");
            break;
        case 2: 
            printf("segunda");
            break;
        case 3: 
            printf("terca");
            break;
        case 4:
            printf("quarta");
            break;
        case 5:
            printf("quinta");
            break;
        case 6: 
            printf("sexta");
            break;
        case 7: 
            printf("saabado");
            break;
        default:
            printf("Numero invalido");
            break;
    }

    return 0;
}