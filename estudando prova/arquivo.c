#include<stdio.h>
#include<stdlib.h>

typedef  struct aluno _Aluno;
struct aluno
{
    char nome[50];
    float n1,n2,n3;
    int matricula;
};

void ler_dados()
{

        printf("Digite o nome do aluno:");
        scanf("%s",dados->nome);
        fprintf(p,"%s",dados->nome);

        fclose(p);
        system("pause");

    }



}
void gravar_dados(_Aluno *a)
{
    FILE *p;
    _Aluno *dados;
    p=fopen("Teste.bin","a+b");
    if (p ==NULL)
    {
        printf("O arquivo nao pode ser aberto!");
    }
    else
    {
        fwrite(a,sizeof(TAluno),1,p);
        fclose(p);
    }
}



int main()
{
_Aluno *al;
int n=2;

al=(_Aluno*)malloc(sizeof(_Aluno)*n);

ler_dados();

return 0;
}
