#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que leia um inteiro n e:
 Crie e leia um vetor com os dados de n carros: marca (máximo 15
letras), ano e preço.
 Leia um valor p e mostre as informações de todos os carros com
preço menor que p. Repita este processo ate que seja lido um valor p
= 0.*/


typedef struct cadastro Carro;

struct cadastro
{
    char nome[30];
    char marc[15];
    int ano;
    float preco;
};

void ler_carro(Carro car)
{
    float p;
    printf("Digite o preço desejado:")
    scanf("%f",&p);


}


int main()
{
    int n;


    printf("digite um valor:");
    scanf("%i", &n);

    Carro vet[n];


}
