#include <stdio.h>

/*Escreva um algoritmo que solicite ao usu�rio dois n�meros reais a e b. Seu programa deve
multiplicar a por b e exibir o resultado.*/

int main() {

    float n1, n2,resultado;

     printf("digite um numero: \n");
     scanf("%.2f", &n1);
     printf("digite um numero: \n");
     scanf("%.2f", &n2);

     resultado= n1 * n2;

     printf("resultado: %.2f \n ", resultado);

return 0;
}
