#include<stdio.h>
#include<stdlib.h>
#include "cliente.h"
#include "menu.h"
void ler_endereco()
{
    FILE *e;
    endereco *end;
    char nome_arquivo[20] = "endereco.txt";

    end = (endereco*)malloc(sizeof(endereco)*1);
    if (( e = fopen("endereco.txt" ,"w+")) == NULL)
    {

        printf("\n\nNao foi possivel abrir o arquivo.\n");
    }
    else
{
    printf("Digite nome da rua:");
    scanf("%s",end->rua);
    printf("Digite numero da residencia:");
    scanf("%i",&end->n);
    printf("Digite nome do bairro:");
    scanf("%s",end->bairro);

    fwrite(end, sizeof(endereco), 1, e );
    cardapio();
}
}
void imprimir_endereco()
{
     FILE *e;
    endereco *end;
    char nome_arquivo[20] = "endereco.txt";

    end = (endereco*)malloc(sizeof(endereco)*1);
    if (( e = fopen("endereco.txt" ,"w+")) == NULL)
    {

        printf("\n\nNao foi possivel abrir o arquivo.\n");
    }
    else
{
    printf("Nome da rua: %s",end->rua );
    printf("Numero da residencia: %i",end->n );
    printf("Bairro: %s", end->bairro);

    fread(end, sizeof(endereco), 1 , e);
}
}
