#include <stdio.h>

/*Uma empresa de transporte quer aumentar o sal�rio de seus funcion�rios em N% de
reajuste. Crie um programa que solicite dois n�meros. O primeiro n�mero representar� o
sal�rio do funcion�rio e o segundo n�mero corresponde o percentual de reajuste. O
algoritmo deve exibir o sal�rio do funcion�rio ap�s o aumento.*/

int main() {

    float salario, reajuste, salarF;

     printf("digite o valor do salario: \n");
     scanf("%f", &salario);
     printf("digite o valor do reajuste: \n");
     scanf("%f", &reajuste);

     salarF= salario + (salario* reajuste/100);

     printf("salario final: %.2f \n", salarF);

return 0;
}
