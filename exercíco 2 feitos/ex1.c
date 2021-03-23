#include <stdio.h>
/*Faça um algoritmo que leia dois valores do teclado do tipo real e verifique qual o maior
valor. Imprima qual é o maior valor.*/

int main() {

  float n1,n2;

    printf("digite um numero:\n");
    scanf("%f",&n1);
    printf("digite um numero:\n");
    scanf(" %f",&n2);

    if (n1> n2) {
        printf("O maior número é: %2.f", n1);
    }
    else if(n1==n2){
        printf("Os numeros são iguis:");
        }
    else
        printf("O maior número é %2.f", n2);

 return 0;
}
