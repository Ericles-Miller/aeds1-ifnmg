#include<stdio.h>
#include<locale.h>
#include<locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int opcao=9,n;

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

switch (opcao)
{
    case  1:
    printf("\nCadastrar Cliente:");
    //funçao cadastro Cliente
    cliente_cadastro();
break;

    case  2:
    printf("\nCadastrar Ingrediente:");
    //funcao Cadastrar Ingrediente
break;

    case 3:
    printf("\nExibir cliente:");
    //funcao exibir cliente
break;

    case 4:
        printf("\nExibir ingrediente:");
    //funcao exibir ingre
break;

    case 5:
        printf("\nFazer pedido de pizza:");
      //funcao criar pedido
       //fazer a função pizza receber a funcao pedido
        //verifica if ingredientes da pizza tem no estoque

break;

    case 6:
        printf("\nBuscar um pedido por código:");
        printf("\nDigite o codigo do pedido desejado:");
        scanf("%i",n);
    //usar o if para verificar se o ponteiro pedido -> codigo eh igual ao codigo digitado

break;

    case 7:
        printf("\nListar pedidos por cliente:");
        //usar funcao mostrar pedidos usando for pra mostrar todos

break;

    case 8:
        printf("\nRelatorio de gasto:");
        //usar a funcao que calcula o valor gasto e exibir usando for

break;

    case 9:
        printf("\nRelatorio de estoque:");
        // usar a funçao dos ingredientes e imprimir ela
break;

default: printf("Valor inválido!");


}


return 0;
}
