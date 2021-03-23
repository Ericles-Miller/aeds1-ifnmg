#include <stdio.h>
#include <stdlib.h>

typedef struct professor TProfessor;
struct professor
{
    char nome[50];
    char formacao[50];
};

typedef struct disciplina TDisciplina;
struct disciplina
{
    char sigla[4];
    char nome[50];
    TProfessor prof;
    int carga_horaria;
};

typedef struct aluno TAluno;
struct aluno
{
    char nome[50];
    int matricula;
    char sexo;
    TDisciplina *lista_discs;
    int qtd_discs;
    float *lista_medias;
};

void alocar_aluno( int qtd_disc)
{
    TAluno *a;
    a = (TAluno*)malloc( sizeof(TAluno) );
    a->qtd_discs = qtd_disc;
    a->lista_discs = (TDisciplina*)malloc( sizeof(TDisciplina) * qtd_disc);
}

void ler_aluno(TAluno *al )
{
    int i;
    scanf("%s", al->nome);
    scanf("%i", &al->matricula);
    scanf("\n%c", &al->sexo);
    for(i=0; al->qtd_discs; i++)
    {
        scanf("%s", al->lista_discs[i].sigla);
        scanf("%s", al->lista_discs[i].nome);
        scanf("%s", al->lista_discs[i].prof.nome);
        scanf("%s", al->lista_discs[i].prof.formacao);
        scanf("%i", &al->lista_discs[i].carga_horaria);
        scanf("%f", &al->lista_medias[i]);
    }
}

float calcular_media(TAluno *al)
{
    int i;
    float m=0;
    for(i=0; al->qtd_discs; i++)
    {
        m += al->lista_medias[i];
    }
    m /= al->qtd_discs;
    return m;
}

void professores_aluno(TAluno *al, int t, int mat)
{
    int i,j;
    for(i = 0; i < t; i++)
    {
        if( al[i].matricula ==  mat)
        {
            for(j = 0; j < al[i].qtd_discs; j++)
            {
                printf("Professor: %s\n", al[i].lista_discs[j].prof.nome);
            }
        }
    }
}

int main()
{


    return 0;
}
