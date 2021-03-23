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

void ler_turma( _Aluno *tur, int t)
{
    int i;
    for(i=0;i<t;i++)
    {
       ler_aluno( &tur[i]);
    }
}

void imprimir_turma( _Aluno *tur, int t)
{
    int i;
    for(i=0;i<t;i++)
    {
       imprimir_aluno( &tur[i]);
    }
}

int main()
{
    int N;
    _Aluno *turma;
    printf("Digite quantidade de alunos: ");
    scanf("%i",&N);
    turma = (_Aluno*)malloc(sizeof(_Aluno)*N);
    ler_turma(turma, N);
    imprimir_turma(turma,N);
    free(turma);
    return 0;
}
