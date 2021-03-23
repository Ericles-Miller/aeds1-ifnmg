#include<stdio.h>
#include<stdlib.h>

/*8. Crie uma estrutura representando os alunos do curso de Introdução a
Programação de Computadores. A estrutura deve conter a matrícula do
aluno, nome, nota da primeira prova, nota da segunda prova e nota da
terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior media geral.
d) Encontre o aluno com menor media geral
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
valor 6 para aprovação.*/

typedef struct alunos CC;
struct alunos
{
    int matricula[2];
    char nome[30];
    float n1[2];
    float n2[2];
    float n3[2];
    float notamaior[2],media[2];
};
typedef struct resultado res;

struct resultado
{
    float maior;
    float menor, maior2;
};


void ler_dados ( CC *dados)
{
    int i;

    for (i=1;i<=2; i++)
    {
    printf("\nDigite o seu nome:");
    scanf(" %s",dados->nome);
    printf("\nDigite o numero de matricula:");
    scanf("%i",&dados->matricula[i]);
    printf("\nDigite a primeira nota:");
    scanf("%f",&dados->n1[i]);
    printf("\nDigite a primeira nota:");
    scanf("%f",&dados->n2[i]);
    printf("\nDigite a primeira nota:");
    scanf("%f",&dados->n3[i]);

    dados->notamaior[i]=dados->n1[i];

    if (dados->n2 > dados->notamaior)
    {
        dados->notamaior[i]= dados->n2[i];
    }
    else if(dados->n3[i]> dados->notamaior[i])
    {
          dados->notamaior[i]= dados->n3[i];
    }

    dados->media[i]=(dados->n1[i]+dados->n2[i]+dados->n3[i])/3;

    printf("\nSua media foi %.2f",dados->media[i]);
}









}

void verifica_dados( CC *dados)
{
    int i;
    float menor=0, maior=0, maior2;

     for (i=1;i<=2; i++)
    {

 if (maior< dados->media[i])
        {
            maior= dados->media[i];

        }
     if (menor > dados->media[i])
        {
            menor= dados->media[i];
        }
    if(maior2 < dados->notamaior[i])
        {
            maior2=dados->notamaior[i];

        }
    }

    printf("\nA media maior é:%.2f",maior);
    printf("\nA media menor é:%.2f",menor);
    printf("\nA maior nota é:%.2f",maior2);

}


int main()
{
    int i;
CC *a;

a=(CC*)malloc(sizeof(CC)*2);

    ler_dados(a);

 verifica_dados(a);



return 0;

}





