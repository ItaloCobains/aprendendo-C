#include <stdio.h>

int main(){
    int x = 5;
    int y = 6;
    int soma();
    int resultado;

    resultado = soma(x, y);
    printf("%d", resultado);



}

int soma(int a, int b){
    int resposta = a + b;

    return resposta;
}
