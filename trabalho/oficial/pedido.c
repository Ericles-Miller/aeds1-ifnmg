#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include "ingrediente.h"
#include "pedido.h"

void fazer_pizza(int n)
{
    int i;
    int a=0;
    char data_americana[9];
    char hora_normal[9];


for(i=0;i<n;i++)
{
    int codigo_do_pedido=0;

    _Ingre *ingre;
    _Ingre pingre;
    montagem *mesa;

    FILE *ingredientes;
    FILE *pedido_pizza;

    _Ingre *ped = aloca_ingrediente();

    if((ingredientes=fopen("ingrediente.txt","r+"))== NULL)
    {
        printf("\n Não foi possível abrir o arquivo.\n");
    }

    if((pedido_pizza=fopen("pedidos_pizza.txt","a+"))== NULL)
        {
        printf("\n Não foi possível abrir o arquivo.\n");
        }

    ingredientes=fopen("ingrediente.txt","a+");
    pedido_pizza=fopen("pedidos_pizza.txt","a+");

    imprimir_ingrediente();
    mesa=alocar_pizza();

    printf("\nDigite o codigo do 1° ingrediente:");
    scanf("%i",&pingre);

    while(fscanf(ingredientes,"%i",ingre->cod)!=NULL)
    {
        if (mesa->ingre1!=ingre->cod)
        {
            printf("\nNão temos esse ingrediente!\n");
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
                fscanf(ingredientes,"%i",&ingre->estoque);
                ingre->estoque-=1;
                fprintf(ingredientes,"%i",ingre->estoque);

            }
        }
    }


    printf("\nDigite o codigo do 2° ingrediente:");
    scanf("%i", &ped->cod);

    while(fscanf(ingredientes,"%i",ped->cod)!=NULL)
    {
     if (mesa->ingre2!=ped->cod)
    {
        printf("\nNão temos esse ingrediente!\n");
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
            fscanf(ingredientes,"%i",&ingre->estoque);
            ingre->estoque-=1;
            fprintf(ingredientes,"%i",ingre->estoque);

        }

    }
    }

    printf("\nDigite o codigo do 3° ingrediente:");
    scanf("%i",&mesa->ingre3);

    while(fscanf(ingredientes,"%i",ped->cod)!=NULL)
    {
     if (mesa->ingre3!=ped->cod)
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
            fscanf(ingredientes,"%i",&ingre->estoque);
            ingre->estoque-=1;
            fprintf(ingredientes,"%i",ingre->estoque);

        }

    }
    }

    printf("\nDigite o codigo do 4° ingrediente:");
    scanf("%i",&mesa->ingre4);

    while(fscanf(ingredientes,"%i",ped->cod)!=NULL)
    {
     if (mesa->ingre4!=ped->cod)
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
            fscanf(ingredientes,"%i",&ingre->estoque);
            ingre->estoque-=1;
            fprintf(ingredientes,"%i",ingre->estoque);

        }

    }
    }

    printf("\nDigite o codigo do 5° ingrediente:");
    scanf("%i",&mesa->ingre5);

    while(fscanf(ingredientes,"%i",ped->cod)!=NULL)
        {
     if (mesa->ingre5!=ped->cod)
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
            fscanf(ingredientes,"%i",&ingre->estoque);
            ingre->estoque-=1;
            fprintf(ingredientes,"%i",ingre->estoque);

        }

    }
        }



    printf("\nDigite o tipo de massa A alta e F fina:");
    scanf(" %c",&mesa->massa);

    if (mesa->massa=='a'|| mesa->massa=='A'|| mesa->massa=='f'|| mesa->massa=='F' )
    {
        fprintf(pedido_pizza," %c",mesa->massa);

    }
    else
        {
        printf("Valor inválido:");
        }


    printf("\nDigite o tamanho da pizza P pequena M média e G grande:");
    scanf(" %c",&mesa->tamanho);

    if (mesa->tamanho=='p'|| mesa->tamanho=='P'|| mesa->tamanho=='m'|| mesa->tamanho=='M'||
        mesa->tamanho=='g'|| mesa->tamanho=='G')
        {
            fprintf(pedido_pizza," %c",mesa->tamanho);
        }
        else
        {
            printf("\nValor inválido:");
        }
        printf("\nDigite 'domicilio' para entrega em domicilio e 'local' para comer no local ");
        scanf(" %s",mesa->local);

        printf("\nConfira os dados:");

        printf("\nPizza: %i",a+1);
        printf("\nIngredinte 1: %i",mesa->ingre1);
        printf("\nIngredinte 2: %i",mesa->ingre2);
        printf("\nIngredinte 3: %i",mesa->ingre3);
        printf("\nIngredinte 4: %i",mesa->ingre4);
        printf("\nIngredinte 5: %i",mesa->ingre5);
        printf("\nAltura da massa: %c",mesa->massa);
        printf("\nTamanho da Pizza: %c ",mesa->tamanho);
        printf("\nLocal: %s",mesa->local);
        printf("\n Qtd: %i",n);
        mesa->qtd_de_pizza=n;
        _strdate(data_americana);
            strcpy(mesa->data,data_americana);
            _strtime(hora_normal);
            strcpy(mesa->hora,hora_normal);

        printf("\nData: %s",mesa->data);
        printf("\nHora: %s",mesa->hora);

            fprintf(pedido_pizza,"\n Ingrediente 1 %i",mesa->ingre1);
            fprintf(pedido_pizza,"\n Ingrediente 2 %i",mesa->ingre2);
            fprintf(pedido_pizza,"\n Ingrediente 3 %i",mesa->ingre3);
            fprintf(pedido_pizza,"\n Ingrediente 4 %i",mesa->ingre4);
            fprintf(pedido_pizza,"\n Ingrediente 5 %i",mesa->ingre5);
            fprintf(pedido_pizza,"\n Massa : %c",mesa->massa);
            fprintf(pedido_pizza,"\nTamanho: %c",mesa->tamanho);
            fprintf(pedido_pizza,"\nLocal: %s",mesa->local);
            fprintf(pedido_pizza,"\nData: %s",mesa->data);
            fprintf(pedido_pizza,"\nHora: %s",mesa->hora);
            fprintf(pedido_pizza,"\nQtd de Pizza: %i",mesa->qtd_de_pizza);



            while(!feof(pedido_pizza))
            {
            if(codigo_do_pedido==mesa->cod_ped)
            {
                mesa->cod_ped=+1;

            fprintf(pedido_pizza,"\nCodigo: %i",mesa->cod_ped);

            }
            else
            {
                mesa->cod_ped=+2;
                fprintf(pedido_pizza,"\nCodigo: %i",mesa->cod_ped);

            }
            }
    free(mesa);

    fclose(pedido_pizza);

    fclose(ingredientes);
    system("PAUSE");

}
}
void pedido_lista(int n,montagem *busca)
{
    FILE *pedido_pizza;

    if(n==busca->cod_ped)
    {
        if((pedido_pizza=fopen("pedido_pizza.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(pedido_pizza))
                        {
                            fscanf(pedido_pizza," %i",&busca->ingre1);
                            printf("\nPreço do ingrediente: %i ",busca->ingre1);
                            fscanf(pedido_pizza," %i",&busca->ingre2);
                            printf("\nPreço do ingrediente: %i ",busca->ingre2);
                            fscanf(pedido_pizza," %i",&busca->ingre1);
                            printf("\nPreço do ingrediente: %i ",busca->ingre3);
                            fscanf(pedido_pizza," %i",&busca->ingre1);
                            printf("\nPreço do ingrediente: %i ",busca->ingre3);
                            fscanf(pedido_pizza," %i",&busca->ingre4);
                            printf("\nPreço do ingrediente: %i ",busca->ingre4);
                            fscanf(pedido_pizza," %i",&busca->ingre5);
                            printf("\nPreço do ingrediente: %i ",busca->ingre5);
                            fscanf(pedido_pizza," %c",&busca->massa);
                            printf("\nMassa: %c",busca->massa);
                            fscanf(pedido_pizza,"c", &busca->tamanho);
                            printf("\nTamanho da pizza: %c",&busca->tamanho);
                            fscanf(pedido_pizza,"%i",&busca->qtd_de_pizza);
                            printf("\nQuantidade de pizza: %i");
                            fscanf(pedido_pizza,"%s",busca->data);
                            printf("%s",busca->data);
                            fscanf(pedido_pizza,"%s",busca->hora);
                            printf("%s",busca->hora);
                        }
                      }
                    }
}

montagem* alocar_pizza()
{
    return (montagem*)malloc(sizeof(montagem));
}
