#include <stdio.h>
#include <stdlib.h>


void imprime_vi1(int vetor[10], int t)
{
   int i;
    for(i=0;i<t;i++)
    {
        printf("%i ",vetor[i]);
    }
}

void imprime_vi2(int vetor[], int t)
{
   int i;
    for(i=0;i<t;i++)
    {
        printf("%i ",vetor[i]);
    }
}

void imprime_vi3(int *vetor, int t)
{
   int i;
    for(i=0;i<t;i++)
    {
        printf("%i ",vetor[i]);
    }
}

int main()
{
    int v[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    imprime_vi1(v,5);
    printf("\n");
    imprime_vi2(v,10);
    printf("\n");
    imprime_vi3(v,15);

    return 0;
}

