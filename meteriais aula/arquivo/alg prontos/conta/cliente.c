#include <stdio.h>
#include "cliente.h"

void ler_cliente( TCliente * c)
{
    printf("Digite nome: ");
    scanf("%s",c->nome);
    printf("Digite cpf: ");
    scanf("%s",c->cpf);
}
void imprimir_cliente( TCliente * c)
{
    printf("Nome do cliente: %s\n",c->nome);
    printf("CPF: %s\n",c->cpf);
}
