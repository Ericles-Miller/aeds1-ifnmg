#include <stdio.h>
/*Fa�a um algoritmo que leia dois valores do teclado do tipo real e verifique qual o maior
valor. Imprima qual � o maior valor.*/

int main() {

  float n1,n2;

    printf("digite um numero:\n");
    scanf("%f",&n1);
    printf("digite um numero:\n");
    scanf(" %f",&n2);

    if (n1> n2) {
        printf("O maior n�mero �: %2.f", n1);
    }
    else if(n1==n2){
        printf("Os numeros s�o iguis:");
        }
    else
        printf("O maior n�mero � %2.f", n2);

 return 0;
}
