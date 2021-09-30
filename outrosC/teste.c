#include <stdio.h>
#include <stdlib.h>

void exercicio(){
    int i;
    for (i = 99; i >=49; i--) {
        printf("%d ", i);
    };
}

void exercicio2(){
    int i, valor;
    for(i = 0; i < 100; i++) {
        printf("Informe um valor:  ");
        scanf("%d", &valor);

        printf(" O quadrado desse numero eh:  %d.\n", valor * valor);
    }
}

void exercicio3(){
    int i, j, ehprimo;
    for(i = 190; i > 130; i--){
        for(j = 2; j < i ; j++){
            if((i % j) == 0){
                ehprimo = 1;
            }
        }
        if(ehprimo == 1){
            printf("%d\n", i);
        }
    };
}



int main(){
    exercicio3();

    //exercicio2();
    
    //exercicio();

}
