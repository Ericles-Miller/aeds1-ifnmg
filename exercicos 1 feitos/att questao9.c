#include <stdio.h>

/*Escreva um algoritmo que solicite ao usuário três números reais a, b e c. Seu programa
deve somar todos os reais a, b e c e exibir a soma.*/
int main() {

    float n1, n2,n3, resultado;

     printf("digite um numero: \n");
     scanf("%f", &n1);
     printf("digite um numero: \n");
     scanf("%f", &n2);
     printf("digite um numero: \n");
     scanf("%f", &n3);
     resultado= n1+n2+n3;

     printf("resultado: %.2f \n", resultado);

return 0;
}
