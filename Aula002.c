#include<stdio.h>
#include<conio.h>
float n1,n2,media;int i;
char nome;
main()
{
    i = 0;
    do{
        printf("entre com o nome do aluno :");
        scanf("\n%c",&nome);
        printf("\nentre com a 1Nota :");
        scanf("%f", &n1);
        printf("\nentre com a 2Nota :");
        scanf("%f", &n2);
        media = (n1+n2)/2;
        i++;
    }while(i<5);
    printf("A media e:%f",media);
}