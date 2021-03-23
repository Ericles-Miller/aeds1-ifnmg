#include<stdio.h>

/*Faça um algoritmo que leia três números inteiros, determinar qual o menor valor (imprima
o menor valor).*/

int main ()
{
int n1,n2,n3;



    if (n1< n2 && n1<n3){
        printf("O menor numero é: %i", n1);
    }
    else if (n2<n1 && n2< n3){
        printf("O menor numero é: %i\n", n2);

    }
    else printf("O menor numero é: %i", n3);

return 0;
}
