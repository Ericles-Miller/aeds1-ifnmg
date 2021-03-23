#include <stdio.h>
#include <stdlib.h>

#pragma once

typedef struct cad_ingre _Ingre;
struct cad_ingre
{
    char nom_ingre[50];
    int cod;
    float preco;
    int estoque;
    int n_ingredientes;
};

void *cadastro_igrediente(_Ingre *pizz);

_Ingre*  aloca_ingrediente();
