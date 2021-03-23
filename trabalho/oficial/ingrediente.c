#include <stdio.h>
#include <stdlib.h>
#include "ingrediente.h"

void *cadastro_igrediente(_Ingre *pizz)
{
        FILE *file_ingre;
        file_ingre=fopen("ingrediente.txt","a");

       printf("\nDigite o código:");
       scanf("%i",&pizz->cod);
       fprintf(file_ingre,"%i",pizz->cod);

        printf("\nDigite o nome do ingrediente:");
        scanf("%s",pizz->nom_ingre);
        fprintf(file_ingre," %s ",pizz->nom_ingre);

        printf("\nDigite o preço:");
        scanf("%f",&pizz->preco);
        fprintf(file_ingre,"%.2f ",pizz->preco);

        printf("\nDigite a quantidade do ingrediente :");
        scanf("%i",&pizz->estoque);
        fprintf(file_ingre,"%i\n ",pizz->estoque);

        fclose(file_ingre);
        system("PAUSE");


}

_Ingre*  aloca_ingrediente()
{
    return (_Ingre*)malloc(sizeof(_Ingre));
}


void imprimir_ingrediente()
{
    FILE *mostra_ingre;
    _Ingre *mostrar;
    mostrar = aloca_ingrediente();

    if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
    }
    else
    {
    while(!feof(mostra_ingre))
    {
        fscanf(mostra_ingre," %i",&mostrar->cod);
    printf("\nCod: %i ",mostrar->cod);

        fscanf(mostra_ingre," %s",mostrar->nom_ingre);
    printf("\nNome: %s ",mostrar->nom_ingre);

        fscanf(mostra_ingre," %f",&mostrar->preco);
    printf("\nPreco: %f ",mostrar->preco);

        fscanf(mostra_ingre," %i",&mostrar->estoque);
    printf("\nEstoque: %i\n ",mostrar->estoque);
    }
    }
    free(mostrar);
    fclose(mostra_ingre);


}


