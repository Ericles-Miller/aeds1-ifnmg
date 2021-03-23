#include <stdio.h>
#pragma once

typedef struct cadastro_cliente Scliente;

struct cadastro_cliente
{
    int id;
    char nome[200];
    char rua[100];
    int numero;
    char bairro[100];
};
void imprimir_cliente(Scliente *cli);

void funcao_cad_cli (Scliente *dad);

Scliente * busca_cliente(int id );

Scliente* alocar_cliente();

