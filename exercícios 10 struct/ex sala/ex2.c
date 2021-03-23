#include<stdio.h>
#include<stdlib.h>

/*Declare uma estrutura (struct) capaz de criar variáveis para armazenar os
seguintes dados de funcionário:
 nome com no máximo 30 caracteres,
 código de matrícula com exatamente 8 caracteres,
 código do seu cargo profissional com exatamente 2 caracteres,
 número de dependentes,
 salário.*/

typedef struct dados dad;
struct dados
{
    char nome[30],matricula[8],cargo[2];
    int n;
    float salario;

};
void ler (dad *d)
{
    printf("\nDigite o seu nome:");
    scanf(" %s",d->nome);
    printf("\nDigite o numero de matricula:");
    scanf("%s",d->matricula);
    printf("\nDigite o numero de dependentes:");
    scanf("%f",&d->n);
    printf("\nDigite o seu cargo:");
    scanf(" %s",d->cargo);
    printf("\nDigite seu slario:");
    scanf("%f",&d->salario);
}

int main()
{
    dad *p;

    p=(dad*)malloc(sizeof(dad));

    ler(p);
}
