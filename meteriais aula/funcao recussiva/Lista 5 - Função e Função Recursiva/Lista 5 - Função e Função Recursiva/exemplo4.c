#include <stdio.h>
#include <stdlib.h>

void ler_vetor( int *vet, int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        scanf("%i",&vet[i]);
    }

}


void altera_z( int a)
{
    a++;
}

void altera_vetor(int *vet, int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        vet[i]*=2;
    }
}

void imprime_vetor(int *vetor, int t)
{
   int i;
    for(i=0;i<t;i++)
    {
        printf("%i ",vetor[i]);
    }
}

int main()
{
    int z = 10;
    int v[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    /*
     altera_z( z );
     printf("z: %i\n",z);
    */

    ler_vetor(v,15);
    imprime_vetor(v,15);
    printf("\n");
    altera_vetor(v,15);
    imprime_vetor(v,15);

    return 0;
}

