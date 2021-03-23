#include <stdio.h>

typedef struct disciplina _Disciplina;
struct disciplina
{
	int codigo;
    char nome[50];
    char professor[50];
};

typedef  struct aluno _Aluno;
struct aluno
{
    char nome[50];
    float n1,n2,n3;
    int matricula;
    _Disciplina disc;
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

void ler_disciplina( _Disciplina *d)
{
    printf("Digite codigo da disciplina: ");
    scanf("%i", &d->codigo);
    printf("Digite nome da disciplina: ");
    scanf("%s",d->nome);
    printf("Digite nome do professor: ");
    scanf("%s", d->professor);
}

void imprimir_aluno(_Aluno *al)
{
    printf("Nome: %s\n",al->nome);
    printf("Tres notas: %f %f %f\n",al->n1,al->n2,al->n3);
    printf("Matricula: %i",al->matricula);
}

void imprimir_disciplina( _Disciplina *d)
{
    printf("Codigo da disciplina: %i\n",d->codigo);
    printf("Nome da disciplina: %s\n",d->nome);
    printf("Nome do professor: %s\n\n", d->professor);
}

int main()
{
    _Aluno *a;
    a = (_Aluno*)malloc(sizeof(_Aluno));
    ler_aluno(a);
    ler_disciplina(&a->disc);
    imprimir_aluno(a);
    imprimir_disciplina(&a->disc);
    return 0;
}
