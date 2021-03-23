#include <stdlib.h>
#include <stdio.h>
#pragma once

typedef struct relatorio _Relat;
struct relatorio
{
     float soma;
     float p1;
     float p2;
     float p3;
     float p4;
     float p5;
     float tamanho_da_pizza;
};

void relatorio_gasto();
_Relat*  aloca_relatorio()
