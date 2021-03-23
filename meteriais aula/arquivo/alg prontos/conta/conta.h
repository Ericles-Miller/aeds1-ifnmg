#include "cliente.h"

#ifndef CONTA_H
#define CONTA_H

typedef struct conta TConta;
struct conta
{
    int codigo;
    TCliente cli;
    float saldo;
};

void ler_conta( TConta * c);
void imprimir_conta( TConta * c);
void deposito( TConta *c, float valor );
void saque( TConta *c, float valor );
TConta* buscar_conta( TConta *contas, int tam,int cod);

void gravar_conta( TConta * c);
int existe_conta();
void ler_conta_arquivo( TConta *c, int t);



#endif
