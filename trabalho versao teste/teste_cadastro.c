#include<stdio.h>
#include<locale.h>
#include<locale.h>

typedef struct cad_cliente _Cliente;
struct cad_cliente
{
    int id;
    char nome[200];
    char rua[100];
    int numero;
    char bairro;
};



void cliente_cadastro (_Cliente *dad )
{
setlocale(LC_ALL, "Portuguese");
 FILE *file;
    file=fopen("cadastro_cliente.txt","w");///abre o arquivo prara gravar

    dad->id+=dad->id +1;///tem erro aqui
    printf("Seu códio é: %i", dad->id);
    printf("Digite seu nome:");
    fscanf(file,"%s",dad->nome);

    printf("Digite sua rua:");
    fscanf(file,"%s", dad->rua);

    printf("Digite o número da casa:");
    fscanf(file,"%i", &dad->numero);

     printf("Digite seu bairro:");
     fscanf(file,"%s", dad->bairro);


    fclose(file);
    system("pause");
///precisa salvar em arquivo...
}


int main()
{
setlocale(LC_ALL, "Portuguese");
int opcao,n;

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
    _Cliente *a;

      a = (_Cliente*)malloc(sizeof(_Cliente));
     printf("Digite quantidade de disciplinas: ");
     cliente_cadastro(a);
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

