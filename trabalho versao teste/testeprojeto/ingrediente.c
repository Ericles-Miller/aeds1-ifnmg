
#include<stdio.h>
#include<stdlib.h>
#include "menu.h"
#include "cliente.h"
#include "ingrediente.h"

void ler_ingredientes()
{
    FILE *i;
		ingredientes *ing;
    char nome_arquivo[20] = "ingredientes.txt";

    ing = (ingredientes*)malloc(sizeof(ingredientes)*1);

    if (( i = fopen("ingredientes.txt" ,"w+")) == NULL)
    {

        printf("\n\nNao foi possivel abrir o arquivo.\n");
    }
    else
    {


        printf("Digite codigo do ingrediente:");
        scanf("%i",&ing->codigo);
        printf("Digite nome do ingrediente:");
        scanf("%s",ing->nome_ingrediente);
        printf("Digite quantidade do ingrediente no estoque:");
        scanf("%i",&ing->quantidade);
        printf("Digite valor do ingrediente:");
        scanf("%f",&ing->preco);

        fwrite(ing, sizeof(ingredientes), 1, i );
    }
}
void imprimir_ingredientes()
{
    FILE *i;
    ingredientes *ing;
    char nome_arquivo[20] = "ingredientes.txt";

    ing = (ingredientes*)malloc(sizeof(ingredientes)*1);

    if (( i = fopen("ingredientes.txt" ,"w+")) == NULL)
    {

        printf("\n\nNao foi possivel abrir o arquivo.\n");
    }
    else
    {
        printf("Codigo do ingrediente: %i",ing->codigo);
        printf("Nome do ingrediente: %s",ing->nome_ingrediente);
        printf("Quantidade do ingrediente em estoque: %i",ing->quantidade);
        printf("Valor do ingrediente: %f",ing->preco);
    }

     fread(ing, sizeof(ingredientes), 1 , i);
}
