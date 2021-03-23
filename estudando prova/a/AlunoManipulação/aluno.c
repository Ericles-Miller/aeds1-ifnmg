#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"


void ler_aluno(TAluno *al)
{
    printf("Nome: ");
    scanf("%s",al->nome);
    printf("Matricula: ");
    scanf("%i",&al->matricula);
    printf("Media: ");
    scanf("%f",&al->media);
}

void imprimir_aluno(TAluno *al)
{
    printf("Nome: %s\n",al->nome);
    printf("Matricula: %i\n",al->matricula);
    printf("Media: %f\n\n",al->media);
}

void alterar_aluno(TAluno *al)
{
    printf("Digite nova media: ");
    scanf("%f",&al->media);
}

void gravar_aluno(TAluno *al)
{
    FILE *p;
    if((p = fopen("aluno.bin", "a+b")) == NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
    }
    else
    {
        fwrite(al,sizeof(TAluno),1,p);
        fclose(p);
    }
}

TAluno * encontrar_aluno( int matricula)
{
    FILE *p;
    TAluno *a = malloc(sizeof(TAluno));

    if((p = fopen("aluno.bin", "rb")) == NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
    }
    else
    {
        while( fread(a,sizeof(TAluno),1,p) != 0)
        {
            if(a->matricula == matricula)
            {
                return a;
            }
        }
        fclose(p);
        free(a);
        return NULL;
    }
}


void listar_alunos( )
{
    FILE *p;
    TAluno *a = (TAluno*) malloc(sizeof(TAluno));

    if((p = fopen("aluno.bin", "rb")) == NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
    }
    else
    {
        while( fread(a,sizeof(TAluno),1,p) != 0)
        {
           imprimir_aluno(a);
        }
        fclose(p);
        free(a);
    }
}



void gravar_media(TAluno *al)
{
    FILE *p;
    TAluno *a = (TAluno*) malloc(sizeof(TAluno));

    if((p = fopen("aluno.bin", "r+b")) == NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
    }
    else
    {
        while( fread(a,sizeof(TAluno),1,p) != 0)
        {
            if(a->matricula == al->matricula)
            {
                fseek(p, sizeof(TAluno)*-1, SEEK_CUR);
                fwrite(al, sizeof(TAluno),1,p);
                break;
            }
        }
        fclose(p);
        free(a);
    }
}
