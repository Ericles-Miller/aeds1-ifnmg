#include <stdio.h>

/*Escreva um algoritmo que solicite ao usu�rio tr�s n�meros inteiros a, b e c. Seu programa
deve multiplicar todos os inteiros a, b e c e exibir o resultado.*/
int main() {

    int n1, n2,n3, resultado;

     printf("digite um numero: \n");
     scanf("%i", &n1);
     printf("digite um numero: \n");
     scanf("%i", &n2);
     printf("digite um numero: \n");
     scanf("%i", &n3);
     resultado= n1*n2*n3;

     printf("resultado: %i \n", resultado);

return 0;
}
