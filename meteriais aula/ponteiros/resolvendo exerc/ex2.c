#include<stdio.h>
#include<stdlib.h>

/*2.	Crie um algoritmo para preencher e imprimir os elementos
 de vetor com um certo valor. Para varrer o vetor, não utilize
  índices, use apenas aritmética de ponteiros.
 Faça isto para os vetores de inteiros e de reais.*/

int main()
{
int vet[5],i;
int *aux= (int*)malloc(sizeof(int)*5);

    for (i=0; i<5; i++)
    {
        printf("Digite um inteiro:");
        scanf("%i",&aux[i]);
       // y=&s[i];
    }

    for ( int i = 0; i < 5; i++)
    {
        printf("\n%i",aux[i]);
    }

    free(aux);
    return 0;
}
