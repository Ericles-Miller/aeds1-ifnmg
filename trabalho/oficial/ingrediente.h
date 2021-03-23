#include <stdio.h>
#include <stdlib.h>

#pragma once

typedef struct cad_ingre _Ingre;
struct cad_ingre
{
    int cod;
    char nom_ingre[50];
    float preco;
    int estoque;

};

void *cadastro_igrediente(_Ingre *pizz);

_Ingre*  aloca_ingrediente();



void imprimir_ingrediente();
