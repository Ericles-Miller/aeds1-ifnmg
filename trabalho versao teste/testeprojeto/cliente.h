#include<stdio.h>
#include"endereco.h"

#ifndef CLIENTE
#define CLIENTE

typedef struct dados clientes;
struct dados
{
    char cpf[15];
    char nome[100];
    endereco *cli;
};
    void ler_dados();
    void imprimir_dados();

#endif
