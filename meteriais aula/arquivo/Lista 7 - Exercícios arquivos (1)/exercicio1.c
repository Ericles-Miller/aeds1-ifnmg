#include <stdio.h>

/*
1.	Faça um algoritmo que leia o nome e sobrenome de 30 alunos e
armazene em um arquivo, de tal forma que o arquivo tenha um
aluno por linha.
*/

#define N 5

int main()
{
    int i;
    FILE *pa;
    char nome[30], sobrenome[30];

    if((pa=fopen("lista_nome","w+")) == NULL)
    {
        printf("ERROR - ARQUIVO");
        return 1;
    }

    for(i=1;i<=N;i++)
    {
        printf("Digite nome e sobrenome: ");
        scanf("%s %s", nome, sobrenome);
        fprintf(pa, "%s %s\n", nome, sobrenome);
    }
    rewind(pa);
    printf("Carregando o arquivo\n");
    for(i=1;i<=N;i++)
    {
        fscanf(pa, "%s %s\n", nome, sobrenome);
        printf("%s %s\n", nome, sobrenome);
    }

    fclose(pa);

    return 0;
}



