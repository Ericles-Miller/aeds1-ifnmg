#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ingrediente.h"
#include "pedido.h"

void fazer_pedido()
{
    int n,a;
    char sim;
    printf("\nDigite a quantidade de Pizza:\n");
    scanf("%i",&n);
    int qtd[n];

    _Ingre *ingre;

    montagem *mesa;

    for(a=0;a<n;a++)
{
    FILE *pedido_pizza,*ingredientes;

    pedido_pizza=fopen("pedidos_pizza.txt","a+");
    ingredientes=fopen("ingrediente.txt","r+");
    qtd[a]=alocar_pizza();

    printf("\nDigite o 1° ingrediente:");
    scanf("%s",mesa->ingre1);

    while(!feof(ingredientes))
    {
    if (mesa->ingre1!=ingre->nom_ingre)
    {
        printf("\nNão temos esse ingrediente!");
        break;

    }
    else
    {
        if(ingre->estoque <0)
        {
            return NULL;
        }
        else
        {
            fscanf("ingrediente.txt","%i",&ingre->estoque);
            ingre->estoque-=1;
            fprintf("ingrediente.txt","%i",ingre->estoque);

        }
    }
    }

    printf("\nDigite o 2° ingrediente:");
    scanf("%s", mesa->ingre2);

    while(!feof(ingredientes))
    {
     if (mesa->ingre2!=ingre->nom_ingre)
    {
        printf("\nNão temos esse ingrediente!");
        break;
    }
    else
    {

        if(ingre->estoque <0)
        {
            return NULL;
        }
        else
        {
            fscanf("ingrediente.txt","%i",&ingre->estoque);
            ingre->estoque-=1;
            fprintf("ingrediente.txt","%i",ingre->estoque);

        }

    }
    }

    printf("\nDigite o 3° ingrediente:");
    scanf("%s",mesa->ingre3);

    while(!feof(ingredientes))
    {
     if (mesa->ingre3!=ingre->nom_ingre)
    {
        printf("\nNão temos esse ingrediente!");
        break;
    }
    else
    {

        if(ingre->estoque <0)
        {
            return NULL;
        }
        else
        {
            fscanf("ingrediente.txt","%i",&ingre->estoque);
            ingre->estoque-=1;
            fprintf("ingrediente.txt","%i",ingre->estoque);

        }

    }
    }

    printf("\nDigite o 4° ingrediente:");
    scanf("%s",mesa->ingre4);

    while(!feof(ingredientes))
    {
     if (mesa->ingre4!=ingre->nom_ingre)
    {
        printf("\nNão temos esse ingrediente!");
        break;
    }
    else
    {

        if(ingre->estoque <0)
        {
            return NULL;
        }
        else
        {
            fscanf("ingrediente.txt","%i",&ingre->estoque);
            ingre->estoque-=1;
            fprintf("ingrediente.txt","%i",ingre->estoque);

        }

    }
    }

    printf("\nDigite o 5° ingrediente:");
    scanf("%s",mesa->ingre5);

    while(!feof(ingredientes))
    {
     if (mesa->ingre5!=ingre->nom_ingre)
    {
        printf("\nNão temos esse ingrediente!");
        break;
    }
    else
    {

        if(ingre->estoque <0)
        {
            return NULL;
        }
        else
        {
            fscanf("ingrediente.txt","%i",&ingre->estoque);
            ingre->estoque-=1;
            fprintf("ingrediente.txt","%i",ingre->estoque);

        }

    }
    }

    printf("\nDigite o tipo de massa A alta e F fina:");
    scanf(" %c",&mesa->massa);

    if (mesa->massa=='a'|| mesa->massa=='A'|| mesa->massa=='f'|| mesa->massa=='F' )
    {
        fprintf("pedidos_pizza.txt"," %c",mesa->massa);
    }
    else
        {
        printf("Valor inválido:");
        break;
        }

    printf("\nDigite o tamanho da pizza P pequena M média e G grande:");
    scanf(" %c",&mesa->tamanho);

    if (mesa->tamanho=='p'|| mesa->tamanho=='P'|| mesa->tamanho=='m'|| mesa->tamanho=='M'||
        mesa->tamanho=='g'|| mesa->tamanho=='G')
        {
            fprintf("pedidos_pizza.txt"," %c",mesa->tamanho);
        }
        else
        {
            printf("\nValor inválido:");
            break;
        }

        printf("\nPizza: %a",a);
        printf("\nIngredinte 1: %s",mesa->ingre1);
        printf("\nIngredinte 2: %s",mesa->ingre2);
        printf("\nIngredinte 3: %s",mesa->ingre3);
        printf("\nIngredinte 4: %s",mesa->ingre4);
        printf("\nIngredinte 5: %s",mesa->ingre5);
        printf("\nAltura da massa: %c",mesa->massa);
        printf("\nTamanho da Pizza: %c ",mesa->tamanho);
        printf("\nDados corretos, sim ou nao ?:");
        scanf(" % c",&sim);
        if(sim=='n')
            a--;
        if(sim=='s')
        {
            fprintf(pedido_pizza,"%s",mesa->ingre1);
            fprintf(pedido_pizza,"%s",mesa->ingre2);
            fprintf(pedido_pizza,"%s",mesa->ingre3);
            fprintf(pedido_pizza,"%s",mesa->ingre4);
            fprintf(pedido_pizza,"%s",mesa->ingre5);
            fprintf(pedido_pizza,"%c",mesa->massa);
            fprintf(pedido_pizza,"%c",mesa->tamanho);


        }
    fclose(pedido_pizza);
    fclose(ingredientes);
}
}


    char local;
    char data[9];
	char hora[9];
    void alocar_pizza()
{
    return (montagem*)malloc(sizeof(montagem));
}

