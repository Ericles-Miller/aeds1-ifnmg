#include <stdio.h>

typedef struct disciplina _Disciplina;
struct disciplina
{
	int codigo;
    char nome[50];
    float n1,n2,n3;
    char professor[50];
};

typedef  struct aluno _Aluno;
struct aluno
{
    char nome[50];
    int matricula;
    _Disciplina *disc;
    int qtd_disciplinas;
};

void ler_aluno( _Aluno *al)
{
    printf("Digite nome do aluno: ");
    scanf("%s",al->nome);
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
    printf("Digite tres notas: ");
    scanf("%f%f%f",&d->n1,&d->n2,&d->n3);
}

void imprimir_aluno(_Aluno *al)
{
    printf("Nome: %s\n",al->nome);
    printf("Matricula: %i\n",al->matricula);
}

void imprimir_disciplina( _Disciplina *d)
{
    printf("Codigo da disciplina: %i\n",d->codigo);
    printf("Nome da disciplina: %s\n",d->nome);
    printf("Nome do professor: %s\n", d->professor);
    printf("Tres notas: %.2f %.2f %.2f\n\n",d->n1,d->n2,d->n3);
}

int main()
{
    int i;
    _Aluno *a;

    a = (_Aluno*)malloc(sizeof(_Aluno));
    printf("Digite quantidade de disciplinas: ");
    scanf("%i",&a->qtd_disciplinas);
    a->disc = (_Disciplina*)malloc(sizeof(_Disciplina) * a->qtd_disciplinas);

    ler_aluno(a);
    for(i=0; i<a->qtd_disciplinas; i++)
    {
			(&a->disc[i]);
    }

    imprimir_aluno(a);
    for(i=0; i<a->qtd_disciplinas; i++)
    {
        imprimir_disciplina(&a->disc[i]);
    }

    return 0;
}
