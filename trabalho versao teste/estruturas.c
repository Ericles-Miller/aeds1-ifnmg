#include<stdio.h>
#include<stdlib.h>
typedef struct cad_cliente _Cliente;
struct cad_cliente
{
    int id;
    char nome[200];
    char rua[100];
    int numero;
    char bairro;
};

typedef struct pizza montagem;
struct pizza
{
    char ingre1[30];
    char ingre2[30];
    char ingre3[30];
    char ingre4[30];
    char ingre5[30];
    char massa;
    char tamanho;

};

typedef struct cad_ingre _Ingre;
struct cad_ingre
{  // int n=5;
    int cod[n];
    char nom_ingre[20][n];
    float preco[n];
    int estoque[n];

};

typedef struct lugar lug;
struct lugar
{
    char local;
    char dataa[9];
	char hora[9];

};





