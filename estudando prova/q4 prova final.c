#include<stdio.h>
#include<stdlib.h>

typedef struct aluno Aluno;
struct Aluno
{
     char nome[25];
    int matricula;
    char sexo;
    _disc *diciplina;
    int qtd;
    float *listaM;

};
typedef struct professor _Prof;
struct _Prof
{
    char nome[25];
    char curso[25];

};

typedef struct disciplina _disc;
struct
{
    char nome[25];
    char sigla[5];
    _Prof prof;
    float C_horario;
};

void alocar_aluno(int qtd_dis)
{
    Aluno *p;

    p=(Aluno*)malloc(sizeof(Aluno));

    p->qtd=qtd_dis;

    p->diciplina= (_disc*)malloc(sizeof(_disc)*qtd_dis);
}

void ler_aluno(Aluno *al)
{
    int i;
    scanf("%s", al->nome);
    scanf("%i", &al->matricula);
    scanf("\n%c", &al->sexo);

    for (i=0; al->qtd; i++)
    {
        scanf("%s",al->diciplina.nome);
        scanf("%s",al->diciplina.sigla);
        scanf("%s",al->diciplina.prof.nome);
        scanf("%s",al->diciplina.prof.curso);
        scanf("%i",al->diciplina.C_horario);
        scanf("%f",al->listaM[i]);
    }
}

float media(Aluno*al)
{
    float mdt=0;
    int i;

    for (i=0; al->qtd; i++)
    {
        mdt+= al->listaM[i];
    }

        mdt= mdt/al->qtd;

    return mdt;

}

void professores_aluno(Aluno *al, int t, int mat)
{
    int i,j;
    for(i = 0; i < t; i++)
    {
        if( al[i].matricula ==  mat)
        {
            for(j = 0; j < al[i].qtd_discs; j++)
            {
                printf("Professor: %s\n", al[i].diciplina[j].prof.nome);
            }
        }
    }
}


