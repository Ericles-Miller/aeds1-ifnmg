#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma once

typedef struct pizza montagem;
struct pizza
{
    int ingre1;
    int ingre2;
    int ingre3;
    int ingre4;
    int ingre5;
    char massa;
    char tamanho;
    int cod_ped;
    char data[9];
    char hora[9];
    char local[50];
    int qtd_de_pizza;

};


void fazer_pizza(int n);

montagem* alocar_pizza();


