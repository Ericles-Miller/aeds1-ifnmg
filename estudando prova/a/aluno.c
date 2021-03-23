#include <stdio.h>
#include <stdlib.h>

typedef struct aluno TAluno;
struct aluno
{
    char nome[30];
    int matricula;
    float media;
};

void ler(TAluno *al)
{
     printf("Nome: ");
    scanf("%s",al->nome);
    printf("Matricula: ");
    scanf("%i",&al->matricula);
    printf("Media: ");
    scanf("%f",&al->media);
}

void gravar(TAluno *al)
{
    FILE *p;

    if ((p= fopen("aluno.txt", "a+b"))==NULL)
        {
            printf("Arquivo nao pode ser aberto\n");
        }
    else
        {
            fwrite(al,sizeof(TAluno),1,p);
            fclose(p);
        }
}
TAluno * busca(int matricula)
{
    FILE *p;
    TAluno *a;
    a= malloc(sizeof(TAluno));

    if ((p=fopen("aluno.txt","rb"))==NULL)
    {
          printf("Arquivo nao pode ser aberto\n");
    }
    else
    {
        while(fread(a,sizeof(TAluno),1,p)!=0)
        {
            if (a->matricula==matricula)
            {
                return a;
            }
        }
        fclose(p);
        free(a);
        return NULL;
    }
}




int main()
{
    TAluno *a;
    int mat;


a=(TAluno*)malloc(sizeof(TAluno));

ler(a);
gravar(a);
 printf("Digite matricula: ");
            scanf("%i",&mat);
            a = encontrar_aluno(mat);
            if( a != NULL )
            {
              imprimir_aluno(a);
            }
            else
            {
                printf("\nAluno nao encontrado!!!!\n\n");
            }
            break;

free(a);

}
