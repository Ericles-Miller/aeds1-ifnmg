#include<stdio.h>
#include<stdlib.h>
#define tam 5
/*18.Fa�a uma fun��o que receba, por par�metro, um vetor A de 25 n�meros inteiros e substitua todos os
valores negativos de A por zero.*/

void vetor (int *v, int l)
{
    int i;
     for(i=0; i<tam;i++)
    {
       if (v[i]<0)
       {
           v[i]=0;
       }
    }
     for(i=0; i<tam;i++)
    {

        printf("%i",v[i]);
    }
}

int main()
{
    int v[tam],f,i;

    for(i=0; i<tam;i++)
    {
        printf("Digite um numero:");
        scanf("%i",&v[i]);
    }

    f=vetor(v,tam);
return 0;
}
