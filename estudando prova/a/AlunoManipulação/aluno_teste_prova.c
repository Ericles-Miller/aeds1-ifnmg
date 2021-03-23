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

void gravar(TAluno *al)
{
    FILE *p;

    if((p=fopen("Arquivo.txt", "a+b"))==NULL)
    {
        printf("--------------------------------------------------");
    }
   else
   {
       fwrite(al,sizeof(TAluno),1,p);
       fclose(p);
   }

}

void alterar(int m)
{
    FILE *p;

    TAluno *al;
al= (TAluno*)malloc(sizeof(TAluno));

    if((p=fopen("Arqivo.txt","rb"))==NULL)
    {
        printf("---------------");

    }
    else
    {
        while(fread(sizeof(TAluno),1,p)!=0)
        {
            if(m==al->matricula)
            {
                return al;
            }
        }
        fclose(p);
        free(al);
        return NULL;
    }
}

void listar()
{
    FILE *p;
    TAluno *al;

    al= (TAluno*)malloc(sizeof(TAluno));

    if ((p=fopen("Arquivo.txt","rb"))==NULL)
    {
        printf("----------------");
    }
    else
    {
        while(fread(sizeof(TAluno),1,p)!=NULL)
        {
           imprimir_aluno(al);
        }
        fclose(p);
    }
    free(al);
}

void gravarM(TAluno *al)
{
    FILE *p;

    TAluno *pp;

    pp=(TAluno*)malloc(sizeof(TAluno));

    if((p=fopen("ARQU","r+b"))==Null)
    {
        printf("fdgdg");

    }
    else
    {
        while(fread(sizeof(TAluno),1,p)!=0)
        {
            if(pp->matricula==al->matricula)
            {
                fseek(p,sizeof(TAluno)*-1,SEEK_CUR)
                fwrite(al,sizeof(TAluno),1,p);
                break;
            }
        }
        fclose(p);
        free(pp);










