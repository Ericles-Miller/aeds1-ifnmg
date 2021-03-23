
#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct cliente TCliente;
struct cliente
{
    char nome[116];
    char cpf[15];
};

void ler_cliente( TCliente * c);
void imprimir_cliente( TCliente * c);

#endif
