#include<stdio.h>
#include<stdlib.h>

char nome_aluno[40];
int Nota1, Nota2, Nota3, Nota4, media, soma;
char espera;

int main(){

    printf("Nome do aluno: \n\n");
    scanf("%s", &nome_aluno);
    printf("Digite a nota do primeiro bimestre: \n\n");
    scanf("%d", &Nota1);
    printf("Digite a nota do segundo bimestre: \n\n");
    scanf("%d", &Nota2);
    printf("Digite a nota do terceiro bimestre: \n\n");
    scanf("%d", &Nota3);
    printf("Digite a nota do quarto bimestre: \n\n");
    scanf("%d", &Nota4);
    media = (Nota1 + Nota2 + Nota3 + Nota4)/4;
    soma = media;
    printf("O valor total da media de todos os bimestre eh: %d", soma);
    printf("O programa sera fechado automaticamente(clique qualquer tecla para fechar)");
    scanf("%s", &espera);
}