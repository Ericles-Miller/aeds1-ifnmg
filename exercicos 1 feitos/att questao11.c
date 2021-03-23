#include <stdio.h>

/*Uma empresa de transporte quer aumentar o salário de seus funcionários em N% de
reajuste. Crie um programa que solicite dois números. O primeiro número representará o
salário do funcionário e o segundo número corresponde o percentual de reajuste. O
algoritmo deve exibir o salário do funcionário após o aumento.*/

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
