#include <stdio.h>

/*Escreva um algoritmo que solicite ao usu�rio dois n�meros inteiros a e b. Seu programa
deve calcular o resto da divis�o de a por b e exibir o resultado.*/

int main() {

    int n1, n2,resultado;

     printf("digite um numero: \n");
     scanf("%i", &n1);
     printf("digite um numero: \n");
     scanf("%i", &n2);

     resultado= n1% n2;

     printf("resultado: %.2f \n ", resultado);

return 0;
}
