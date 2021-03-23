#include<stdio.h>
#include<stdlib.h>

/*Utilizando struct, faça um algoritmo que permita a entrada de nome,
endereço e telefone de 5 pessoas e os imprima em ordem alfabética.*/

typedef struct pessoa pes;
struct pessoa
{
    char nome[25];
    char endereco[25];
    int telefone[5];
};

void  dados(pes *h, int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%s",(h+i)->nome);
        scanf("%s",(h+i)->endereco);
        scanf("%i",&h->telefone[i]);
    }

}
void buscar(pes *h,int n)
{
    int numero;
    scanf("%i",&numero);
    for(int i=0; i<n; i++)
    {
        if (numero==h->telefone[i])
        {
            printf("Numero %i",h->telefone[i]);
            printf("\nEndereco:%s",(h+i)->endereco);
            printf("\nNome:%s",(h+i)->nome);
        }
    }
}

int main()
{
    pes *a;
    int n=2;
    a=(pes*)malloc(sizeof(pes)*n);


    dados(a,n);
    buscar(a,n);
return 0;
}
