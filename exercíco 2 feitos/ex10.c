#include<stdio.h>

/*Faça um algoritmo que leia três números inteiros, determinar qual o maior e o menor valor
(imprima o menor e o menor valor)..*/

int main ()
{
int n1,n2,n3;

    printf("Digite um número:\n");
    scanf("%i", &n1);
    printf("Digite um número:\n");
    scanf("%i", &n2);
    printf("Digite um número:\n");
    scanf("%i", &n3);

    if (n1< n2 && n1<n3){
        printf("O menor numero é: %i", n1);
    }
    else if (n2<n1 && n2< n3){
        printf("O menor numero é: %i \n", n2);

    }
    else if (n3<n1 && n3<n2) {
        printf("O menor numero é: %i\n", n3);

    }
    printf("\n");


     if (n1> n2 && n1>n3){
        printf("\nO maior numero é: %i", n1);
    }
    else if (n2>n1 && n2> n3){
        printf("\nO maior numero é: %i\n", n2);

    }
    else if (n3>n1 && n3>n2) {
        printf("\nO maior numero é: %i", n3);

    }

return 0;
}
