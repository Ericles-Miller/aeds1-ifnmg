#include <stdio.h>

/*
3.	Escreva um algoritmo que solicite ao usuário um número inteiro a.
Seu programa deve inverter o sinal de a e exibir o resultado.
*/

int main()
{
    int a;
    printf("Digite valor inteiro: ");
    scanf("%i",&a);

    a = -a;
    printf("Resultado: %i\n",a);

    return 0;
}
