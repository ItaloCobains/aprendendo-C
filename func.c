#include <stdio.h>
#include <stdlib.h>

int multiplicação(int a, int b){
    return a * b;
}
int main()
{
    int a = 5;
    int b = 5;
    int resposta;
    resposta = multiplicação(a, b);
    printf(resposta);


    return 0;

}
