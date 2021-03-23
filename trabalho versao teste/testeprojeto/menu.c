#include<stdio.h>
#include<stdlib.h>
#include"cliente.h"
#include"menu.h"

void cardapio()
{
    system("cls");
    int menu;
    printf("======================================Menu======================================\n 1-Cadastrar cliente\n 2-Cadastrar ingrediente\n 3-Exibir cliente\n 4-Exibir ingredientes\n 5-Fazer pedido\n 6-Buscar um pedido por codigo\n 7-Listar pedidos por cliente\n 8-Relatorio por gasto\n 9-Relatorio de estoque\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%i",&menu);

    int qua;
    if(menu == 1)
    {
        ler_dados();
    }
    if(menu==2)
    {
        ler_ingredientes();
    }
    if(menu==3)
    {
        imprimir_dados();
    }
    if(menu==4)
    {
        imprimir_ingredientes();
    }
    if(menu==5)
    {
        //ler_pedido();
    }
    if(menu==6)
    {
       // buscar_pedido();
    }
    if(menu==7)
    {
        //listar_pedido();
    }
    if(menu==8)
    {
        //exibir_relatorio_gastos();
    }
    if(menu==9)
    {
        //exibir_relatorio_estoque();
    }

}

