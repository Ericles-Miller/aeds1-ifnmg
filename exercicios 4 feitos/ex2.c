#include <stdio.h>

/*2.Construa um algoritmo que leia um vetor V[6].
Conte a seguir, quantos valores de V são negativos e mostre essa informação.*/

int main () {
int i,numeros[6],c=-1,n_negativos[6];

 for (i=0; i<6; i++)
 {
     printf("Digite um numero inteiro:\n");
     scanf(" %i",&numeros[i]);

     if (numeros[i]<0)
     {    c+=1;
         n_negativos[c]= numeros[i];
     }
 }
 for (i=0; i<=c; i++)
     {
         printf("OS numeros negativos são:%i \n",n_negativos[i]);
     }

 return 0;
 }
