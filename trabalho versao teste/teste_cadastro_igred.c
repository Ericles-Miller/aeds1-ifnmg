
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>



typedef struct cad_ingre _Ingre;
struct cad_ingre
{   _Ingre *qtd_ingrediente;
    int cod;
    char nom_ingre[20];
    float preco;
    int estoque;

};

void *cadastro_ingrediente(_Ingre *pizz)
{
    FILE *file;
    file=fopen("cadastro_cliente.txt","w");///abre o arquivo prara gravar


        pizz->cod=  pizz->cod+1;
        fprintf("\n Id do produto:%i\n",pizz->cod);
        printf("\nDigite o nome do ingrediente:\n");
        fscanf(file,"%s",pizz->nom_ingre);
        printf("\nDigite o pre�o:\n");
        fscanf(file,"%f",&pizz->preco);
        printf("\nDigite a quantidade do ingrediente %i\n:",pizz->estoque);
        fscanf(file,"%i",&pizz->estoque);

         fclose(file);
    system("pause");
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
    printf("\n8 - Relat�rio de gasto");
    printf("\n9 - Relat�rio de estoque\n");

    scanf("%i",&opcao);
switch (opcao)
{
    case  1:
    printf("\nCadastrar Cliente:");
    //fun�ao cadastro Cliente
  //  cliente_cadastro();
break;

    case  2:



    printf("\nCadastrar Ingrediente:");
    //funcao Cadastrar Ingrediente
     int  i;
   // _Ingre *ing;
    // ing = (_Ingre*)malloc(sizeof(_Ingre));
   //  printf("Digite quantidade de ingredientes: ");
    // scanf("%i",&ing->qtd_ingrediente);





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
       //fazer a fun��o pizza receber a funcao pedido
        //verifica if ingredientes da pizza tem no estoque

break;

    case 6:
        printf("\nBuscar um pedido por c�digo:");
        printf("\nDigite o codigo do pedido desejado:");
       // scanf("%i",n);
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
        // usar a fun�ao dos ingredientes e imprimir ela
break;

default: printf("Valor inv�lido!");


}


return 0;
}
