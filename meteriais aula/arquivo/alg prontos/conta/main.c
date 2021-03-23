#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

int main()
{
    int i, N,opcao,codigo;
    float valor;
    TConta *c, *aux, nova;

    if( existe_conta() == 0)
    {
        printf("Digite quantidade de contas: ");
        scanf("%i",&N);
        c = (TConta*)malloc(sizeof(TConta)*N);
        for(i=0;i<N;i++)
        {
            ler_conta(&c[i]);
            gravar_conta(&c[i]);
        }
    }
    else
    {
        N = qtd_conta();
        c = (TConta*)malloc(sizeof(TConta)*N);
        ler_conta_arquivo(c,N);
    }
    do
    {

        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Listar contas\n");
        printf("4 - Imprimir conta\n");
        printf("5 - Cadastrar nova conta\n");
        printf("0 - Para sair\n");
        scanf("%i",&opcao);

        switch( opcao )
        {
        case 1:
            printf("Digite numero da conta: ");
            scanf("%i",&codigo);
            aux = buscar_conta( c, N,codigo);
            if(aux != NULL)
            {
                printf("Digite valor para deposito: ");
                scanf("%f",&valor);
                deposito(aux,valor);
                printf("Deposito realizado com sucesso\n");
            }
            else
            {
                printf("Conta nao encontrada\n");
            }
            break;
        case 2:
            printf("Digite numero da conta: ");
            scanf("%i",&codigo);
            aux = buscar_conta( c, N,codigo);
            if(aux != NULL)
            {
                printf("Digite valor para saque: ");
                scanf("%f",&valor);
                saque(aux,valor);
                printf("Saque realizado com sucesso\n");
            }
            else
            {
                printf("Conta nao encontrada\n");
            }
            break;
        case 3:
            for(i=0;i<N;i++)
            {
                imprimir_conta(&c[i]);
            }
            break;
        case 4:
            printf("Digite numero da conta: ");
            scanf("%i",&codigo);
            aux = buscar_conta( c, N,codigo);
            if(aux != NULL)
            {
                imprimir_conta(aux);
            }
            else
            {
                printf("Conta nao encontrada\n");
            }
            break;
        case 5:
            ler_conta(&nova);
            gravar_conta(&nova);
            free(c);
            N = qtd_conta();
            c = (TConta*)malloc(sizeof(TConta)*N);
            ler_conta_arquivo(c,N);
            break;
        default:
            printf("Opcao invalida\n");
        }
    }
    while(opcao >=1 && opcao <= 5);



    free(c);
    return 0;
}
