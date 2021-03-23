#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "menu.h"
#include "Cliente.h"
#include "ingrediente.h"



void mostrar_menu()
{
setlocale(LC_ALL, "Portuguese");

printf("Menu:");
    printf("\n1 - Cadastrar Cliente");
    printf("\n2 - Cadastrar Ingrediente");
    printf("\n3 - Exibir cliente");
    printf("\n4 - Exibir ingrediente");
    printf("\n5 - Fazer pedido de pizza");
    printf("\n6 - Buscar um pedido por codigo");
    printf("\n7 - Listar pedidos por cliente");
    printf("\n8 - Relatório de gasto");
    printf("\n9 - Relatório de estoque");

}

void escolher_menu(int opcao)
{
setlocale(LC_ALL, "Portuguese");

int n,cod_cli;
Scliente *cli;
_Ingre *ingre;
switch (opcao)
{
    case  1:
    printf("\n\nCadastrar Cliente:");
    cli=alocar_cliente();
    funcao_cad_cli(cli);

break;

    case  2:
    printf("\n\nCadastrar Ingrediente:");

        ingre = aloca_ingrediente();
        cadastro_igrediente(ingre);

break;

    case 3:
    printf("\n\nExibir cliente:\n");
    printf("Digite o código do cliente:\n");
    scanf("%i",&cod_cli);
    cli=busca_cliente(cod_cli);

    if(cli!= NULL)
    {
        imprimir_cliente(cli);
    }
    else
    {
        printf("\nCliente não encontrado!");
    }
break;

    case 4:
        printf("\n\nExibir ingrediente:\n");
    //funcao exibir ingre
    imprimir_ingrediente();

break;

    case 5:
        printf("\n\nFazer pedido de pizza:");
        printf("\nDigite a quantidade de Pizza:\n");
    scanf("%i",&n);
        fazer_pizza(n);

       //fazer a função pizza receber a funcao pedido
        //verifica if ingredientes da pizza tem no estoque

break;

    case 6:
        printf("\n\nBuscar um pedido por código:");
        printf("\n\nDigite o codigo do pedido desejado:");
        scanf("%i",n);
    //usar o if para verificar se o ponteiro pedido -> codigo eh igual ao codigo digitado

break;

    case 7:
        printf("\n\nListar pedidos por cliente:");
        //usar funcao mostrar pedidos usando for pra mostrar todos

break;

    case 8:
        printf("\n\nRelatorio de gasto:");
        //usar a funcao que calcula o valor gasto e exibir usando for

break;

    case 9:
        printf("\n\nRelatorio de estoque:");
        // usar a funçao dos ingredientes e imprimir ela
break;

default: printf("Valor inválido!");


}
}


