#include<stdio.h>

/*Construa um algoritmo que leia um conjunto não determinado de pares de valores M e N
(parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre:

 a sequência do menor até o maior, inclusive;
 a soma dos inteiros consecutivos do menor até o maior, inclusive.*/

int main() {

    int n,m,i,soman=0,somam=0;

  do {

        printf("\nDigite dois numeros: ");
        scanf("%i%i", &n,&m);
    if (n<m)
    {
    for (i=n; i<=m; i++)
      {
        printf("%i\n", i);
        soman+= i;
      }
      printf("A soma e: %i\n", soman);
    }

   else if (m<n) {
    for (i=m; i<=n; i++)
      {
        printf("%i\n", i);
        somam+= i;
      }
     printf("A soma e: %i\n ", somam);
   }
  }while (n>0 && m>0);

    return 0;
}




