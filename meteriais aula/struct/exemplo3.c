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
    printf("Matricula: %i",al->matricula);
}

int main()
{
    _Aluno a;

    ler_aluno(&a);

    imprimir_aluno(&a);

    return 0;
}
