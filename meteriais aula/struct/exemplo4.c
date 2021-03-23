#include <stdio.h>

typedef  struct aluno _Aluno;
struct aluno
{
    char nome[50];
    float n1,n2,n3;
    int matricula;
};

void ler_aluno( _Aluno *al)
{
    printf("Digite nome: ");
    scanf("%s",al->nome);
    printf("Digite tres notas: ");
    scanf("%f%f%f",&al->n1,&al->n2,&al->n3);
    printf("Digite matricula: ");
    scanf("%i",&al->matricula);
}

void imprimir_aluno(_Aluno *al)
{
    printf("Nome: %s\n",al->nome);
    printf("Tres notas: %f %f %f\n",al->n1,al->n2,al->n3);
    printf("Matricula: %i\n\n",al->matricula);
}

int main()
{
    int i;
    _Aluno turma[4];

    for(i=0; i<4; i++)
    {
        ler_aluno(&turma[i]);
    }

    for(i=0; i<4; i++)
    {
        imprimir_aluno(&turma[i]);
    }



    return 0;
}
