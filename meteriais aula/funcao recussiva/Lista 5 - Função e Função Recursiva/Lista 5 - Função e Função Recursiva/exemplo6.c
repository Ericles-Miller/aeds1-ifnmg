#include <stdio.h>
#include <stdlib.h>


int* alocar_vetor(int tam)
{
    return (int*)malloc(sizeof(int)*tam);
}


void ler_vetor( int *vet, int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        scanf("%i",&vet[i]);
    }
}

void imprimir_vetor(int *vetor, int t)
{
   int i;
    for(i=0;i<t;i++)
    {
        printf("%i ",vetor[i]);
    }
}

int main()
{
    int *vetor;

    vetor = alocar_vetor(10);
    ler_vetor(vetor, 10);
    imprimir_vetor(vetor, 10);

    return 0;
}

