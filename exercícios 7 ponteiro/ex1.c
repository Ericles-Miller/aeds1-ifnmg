#include<stdio.h>
#include<stdlib.h>

/*1. Faça um algoritmo que leia o tamanho de um vetor de inteiros e reserve
dinamicamente memória para esse vetor. Em seguida, leia os elementos
desse vetor, imprima o vetor lido e mostre o resultado da soma dos
números ímpares presentes no vetor.*/

int main()
{

    int i,n,soma=0;
    int *y=NULL;

    y = (int *)malloc(sizeof(int)*n);

    printf("Digite o tamanho do vetor:");
    scanf("%i",&n);

  //  int s[n];//variavel

    for (i=0; i<n; i++)
    {
        printf("Digite um inteiro:");
        scanf("%i",&y[i]);
       // y=&s[i];
    }

    for (i=0; i<n; i++)
    {
        if(y[i]%2!=0)
        {
            soma= soma + y[i];
        }
    }
    for(i=0; i<n; i++)
    {
      printf("\nVETOR: %p %i\n",y[i],y[i]) ;
    }
//v[0] = v[0]+v[1];

        printf("%p %i\n",y,soma);

return 0;
}
