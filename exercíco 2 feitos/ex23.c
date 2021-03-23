#include<stdio.h>

/*Construa um algoritmo que leia o salário e categoria de um funcionário, se a categoria for
= “m” de mensalista, conceder 10% de aumento e exibir o valor reajustado, se for = “h”

de horista, conceder 20% de aumento e exibir o valor reajustado, se não for “m” nem “h”,
exibir a mensagem categoria inválida (utilize o comando switch)..*/

int main(){

char modalidade;
float salario, resultado;

    printf("Digite o seu salario:\n");
    scanf(" %f", &salario);
    // parte de verificação do switc
    printf("Digite a operação 'M' mensalista 'H' horista\n");
    scanf(" %c", &modalidade);

switch(modalidade) {

    case 'M':
    case 'm':
        resultado = salario + salario* 0.10;
        printf("Seu salario é: %2.f", resultado);
    break;

    case 'H':
    case 'h':
        resultado = salario + (salario* 0.20);
        printf("Seu salario é: %2.f", resultado);
    break;

    default : printf("Valores errados: \n");

return 0 ;
    }
}
