#include<stdio.h>

/*Construa um algoritmo que leia o sal�rio e categoria de um funcion�rio, se a categoria for
= �m� de mensalista, conceder 10% de aumento e exibir o valor reajustado, se for = �h�

de horista, conceder 20% de aumento e exibir o valor reajustado, se n�o for �m� nem �h�,
exibir a mensagem categoria inv�lida (utilize o comando switch)..*/

int main(){

char modalidade;
float salario, resultado;

    printf("Digite o seu salario:\n");
    scanf(" %f", &salario);
    // parte de verifica��o do switc
    printf("Digite a opera��o 'M' mensalista 'H' horista\n");
    scanf(" %c", &modalidade);

switch(modalidade) {

    case 'M':
    case 'm':
        resultado = salario + salario* 0.10;
        printf("Seu salario �: %2.f", resultado);
    break;

    case 'H':
    case 'h':
        resultado = salario + (salario* 0.20);
        printf("Seu salario �: %2.f", resultado);
    break;

    default : printf("Valores errados: \n");

return 0 ;
    }
}
