#include<stdio.h>

/*Fa�a um algoritmo que leia tr�s n�meros inteiros, determinar qual o menor valor (imprima
o menor valor).*/

int main ()
{
int n1,n2,n3;



    if (n1< n2 && n1<n3){
        printf("O menor numero �: %i", n1);
    }
    else if (n2<n1 && n2< n3){
        printf("O menor numero �: %i\n", n2);

    }
    else printf("O menor numero �: %i", n3);

return 0;
}
