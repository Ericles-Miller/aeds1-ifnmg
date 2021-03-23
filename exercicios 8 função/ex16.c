#include<stdio.h>
#include<stdlib.h>
/*
16.	Faça uma função que receba por parâmetro um valor inteiro e positivo N e retorne o valor de S,
 onde a 1ª parcela da soma tem N = 1, a 2ª parcela N = 2, ..., até N ser igual ao valor digitado.
.*/

int recebe_valor(int n)
{
   int i;
   float soma=1;

   for(i=0; i<=n; i++)
   {
      soma+=(float) 1/i ;
   }

return soma;
}

int main()
{
    int n,f;

    printf("Diite o valor de N:");
    scanf("%i",&n);

    f=recebe_valor(n);

    printf("A soma foi de: %i",recebe_valor(n));

return 0;
}
