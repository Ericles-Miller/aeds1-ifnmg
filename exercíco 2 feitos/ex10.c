#include<stdio.h>

/*Fa�a um algoritmo que leia tr�s n�meros inteiros, determinar qual o maior e o menor valor
(imprima o menor e o menor valor)..*/

int main ()
{
int n1,n2,n3;

    printf("Digite um n�mero:\n");
    scanf("%i", &n1);
    printf("Digite um n�mero:\n");
    scanf("%i", &n2);
    printf("Digite um n�mero:\n");
    scanf("%i", &n3);

    if (n1< n2 && n1<n3){
        printf("O menor numero �: %i", n1);
    }
    else if (n2<n1 && n2< n3){
        printf("O menor numero �: %i \n", n2);

    }
    else if (n3<n1 && n3<n2) {
        printf("O menor numero �: %i\n", n3);

    }
    printf("\n");


     if (n1> n2 && n1>n3){
        printf("\nO maior numero �: %i", n1);
    }
    else if (n2>n1 && n2> n3){
        printf("\nO maior numero �: %i\n", n2);

    }
    else if (n3>n1 && n3>n2) {
        printf("\nO maior numero �: %i", n3);

    }

return 0;
}
