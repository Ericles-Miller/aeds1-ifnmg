#include<stdio.h>
#include<stdlib.h>

/*1.Faça um algoritmo que leia o tamanho de um vetor de inteiros
 e reserve dinamicamente memória para esse vetor.
 Em seguida, leia os elementos desse vetor, imprima o vetor
 lido e mostre o resultado da soma dos números ímpares presentes
 no vetor.*/

int main()
{
    int n;
    int *v;
    printf("Digite a qtd de posiçoes:");
    scanf("%i",&n);

    int vet[n];

    v=(int*)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++)
    {
        printf("\nNUmero:");
        scanf("%i",&v[i]);
    }

    for ( int i = 0; i < n; i++)
    {
        printf("\n%i",v[i]);
    }

return 0;
}
