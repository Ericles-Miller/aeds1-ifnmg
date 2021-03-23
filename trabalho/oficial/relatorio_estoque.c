#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "relatorio_estoque.h"
#include "ingrediente.h"


void relatorio_estoque(int t,_Ingre *busca)/// ver se tem parame
{
     setlocale(LC_ALL, "Portuguese");
    _Ingre *busca;
     if((pedido_pizza=fopen("pedido_pizza.txt","r"))==NULL)

                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        if (t==busca->cod)

                        {
                        while(!feof(pedido_pizza))
                        {
                            fscanf(pedido_pizza," %s",busca->nom_ingre);
                            fprintf(pedido_pizza,"\nNome do ingrediente: %s ",busca->nom_ingre);
                            fscanf(pedido_pizza," %i",&busca->estoque);
                            fprintf(pedido_pizza,"\nQuantidade: %i ",busca->estoque);
                            fscanf(pedido_pizza," %.2f",&busca->preco);
                            fprintf(pedido_pizza,"\nQuantidade: %.2f ",busca->preco);
                        }
                    }
    }
}

_Ingre*  aloca_ingrediente()
{
    return (_Ingre*)malloc(sizeof(_Ingre));
}
