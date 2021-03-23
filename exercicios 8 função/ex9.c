#include<stdio.h>
#include<stdlib.h>
/*9 Faça uma função que receba como parâmetro um vetor de inteiros de 10 elementos e retorne
 a soma de todos os inteiros do vetor.*/

int soma_vet(int *vetor,int tam)
{
   int soma=0,i;

   for(i=0; i<tam; i++)
   {
       soma+= vetor[i];

   }
return soma;
}


int main()
{
   int c,vet[10],i;

   for (i=0; i<10; i++)
   {
        printf("digite um numero:");
        scanf("%i",&vet[i]);
   }

    c= soma_vet(vet,i);

    printf("A soma foi:%i", c);

return 0;
}

