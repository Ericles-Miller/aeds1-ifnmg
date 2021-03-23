#include<stdio.h>

/*Escreva um algoritmo que calcule o valor do imposto de renda de um contribuinte. O
valor do imposto é calculado de acordo com as seguintes condições:
 Até 1000.00 0%
 maior que 1000.00 e menor que 2500.00 10%
 acima de 2500.00 25%
 O programa deve ler o salário e efetuar o cálculo do imposto de renda de acordo
com as condições acima e exibi-los.*/

int main()
{   float salario;

    printf ("Digite o valor do seu salario:\n");
    scanf("%f", &salario);

    if (salario <= 1000) {

        printf("salario é: %2.f", salario);

    }
    else if (salario> 1000 || salario<2500) {
        salario = salario -(salario * 10/100);
        printf("salario é: %2.f", salario);
    }
    else if ( salario > 2500) {
        salario = salario- (salario * 25/100);
        printf("salario é: %2.f", salario);
    }
return 0;
}
