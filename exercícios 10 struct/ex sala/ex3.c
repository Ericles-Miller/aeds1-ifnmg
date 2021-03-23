#include<stdio.h>
#include<stdlib.h>

/*Faça um algoritmo para ler os dados de 200 alunos e em seguida exibi-los.
Os dados são nome, quantidade de faltas, 5 notas avaliativas e uma
indicação se é bolsista ou não.*/

typedef struct dados dad;
struct dados
{
    char nome[30];
    char bolsa;
    int n;
    float n1;

};

void ler (dad *d)
{
    printf("\nDigite o seu nome:");
    scanf(" %s",d->nome);
    printf("\nDigite bolsa:");
    scanf(" %c",&d->bolsa);

    printf("\nDigite o numero de dependentes:");
    scanf("%f",&d->n1);
}

void imprimir(dad *d)
{
     printf("\nO seu nome: %s",d->nome);
     printf("\nBolsista:%c",d->bolsa);
     printf("\nNota:%f",&d->n1);

}

int main()
{
     dad *p;

    p=(dad*)malloc(sizeof(dad));

    ler(p);
    imprimir(p);
}


