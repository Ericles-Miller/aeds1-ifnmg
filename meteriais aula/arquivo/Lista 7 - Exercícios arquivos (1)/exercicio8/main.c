#include <stdio.h>
#include <stdlib.h>
#include "banco.h"

/*
8.	Faça um algoritmo que controle contas de banco.
Leia um inteiro n e:
a.	Crie e leia um vetor de contas de banco, com código
(inteiro), cliente (máximo 115 letras), saldo.
b.	Leia um inteiro. Se for lido 1, execute depósito.
Se for lido 2, execute saque. Se for lido 3, listar as
contas em ordem crescente(por cliente). Se for 4,
imprimir a conta indicada. Se for lido 0, finalize o
programa. Repita este processo enquanto não for lido um
valor válido.
c.	Depósito: leia um código de conta e um valor. Some o
valor lido no saldo da conta lida. Mostre o nome do cliente
e o saldo resultante na tela.
d.	Saque: leia um código de conta e um valor. Se o saldo
for suficiente, deduza o valor lido no saldo da conta lida.
    Mostre o nome do cliente e o saldo resultante na tela.

Faça o armazenamento da contas em arquivo.

*/

int main()
{
    float valor;
    int i, N, opcao, codigo;
    TBanco *aux,*conta = (TBanco*)malloc(sizeof(TBanco));

    do
    {
        printf("0 - Sair\n");
        printf("1 - Cadastrar conta\n");
        printf("2 - Saque\n");
        printf("3 - Deposito\n");
        printf("4 - Exibir conta\n");
        printf("5 - Listar contas\n");
        scanf("%i",&opcao);
        switch(opcao)
        {
            case 1:
                ler_banco(conta);
                gravar_banco(conta);
                break;
            case 2:
                printf("Digite codigo da conta para saque: ");
                scanf("%i", &codigo);
                aux = buscar_banco(codigo);
                if( aux != NULL)
                {
                    printf("Digite valor: ");
                    scanf("%f",&valor);
                    if( aux->saldo >= valor)
                    {
                        aux->saldo-= valor;
                        atualizar_conta_banco( aux );
                    }
                    free(aux);
                }
                else
                {
                    printf("Conta nao encontrada\n");
                }
                break;
            case 3:
                printf("Digite codigo da conta para deposito: ");
                scanf("%i", &codigo);
                aux = buscar_banco(codigo);
                if( aux != NULL)
                {
                    printf("Digite valor: ");
                    scanf("%f",&valor);
                    aux->saldo+= valor;
                    atualizar_conta_banco( aux );
                    free(aux);
                }
                else
                {
                    printf("Conta nao encontrada\n");
                }
                break;
                break;
            case 4:
                printf("Digite codigo da conta: ");
                scanf("%i", &codigo);
                aux = buscar_banco(codigo);
                if( aux != NULL)
                {
                    imprimir_banco(aux);
                    free(aux);
                }
                else
                {
                    printf("Conta nao encontrada\n");
                }
                break;
            case 5:
                listar_banco();
                break;
        }
    }while(opcao != 0);





    return 0;
}
