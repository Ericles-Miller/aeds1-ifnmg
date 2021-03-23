#include <stdio.h>

/*Escreva um algoritmo que solicite ao usuário dois números inteiros a e b. Seu programa
deve calcular o resto da divisão de a por b e exibir o resultado.*/

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
