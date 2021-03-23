#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"menu.h"
#include"cliente.h"
#include"endereco.h"

void ler_dados()
{
    FILE *c;
    clientes *cli;
    char nome_arquivo[20] = "cliente.txt";

    cli = (clientes*)malloc(sizeof(clientes)*1);

    if (( c = fopen(nome_arquivo, "w+")) == NULL)
    {
        printf("\n\nNao foi possivel abrir o arquivo.\n");
    }
    else
    {
        printf("Digite numero de identificacao fiscal:");
        scanf("\n%s",cli->cpf);

        printf("Digite nome do cliente:");
        scanf("\n%s",cli->nome);

        ler_endereco();

        fwrite(cli, sizeof(clientes), 1, c );
    }
}
int verificar_cpf(clientes *a)
{
    char nome_arquivo[20] = "cliente.txt";
    FILE *c = fopen(nome_arquivo, "w+b");
    clientes cli;
    int cont=0;

    if ( c  == NULL)
    {
        printf("\n\nNao foi possivel abrir o arquivo.\n");
        return 1;
    }
    else
    {
       while(!feof(c))
       {
            fread(&cli, sizeof(clientes), 1 , c);
            if(strcmp(a->cpf, cli.cpf)== 0)
            {
                cont++;
            }
       }
      return cont;
    }
}
void imprimir_dados()
{
    FILE *c;
    clientes *cli;
    char nome_arquivo[20] = "cliente.txt";

    cli = (clientes*)malloc(sizeof(clientes)*1);

    if (( c = fopen(nome_arquivo, "w+")) == NULL)
    {
        printf("\n\nNao foi possivel abrir o arquivo.\n");
    }
    else
    {
        printf("Numero de identificacao fiscal: %s",cli->cpf);
        printf("Nome do cliente: %s",cli->nome);
        imprimir_endereco();

        fread(cli, sizeof(clientes), 1 , c);
    }
}

