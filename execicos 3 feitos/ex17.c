#include<stdio.h>

/*17. Construa um algoritmo que dado um número, por exemplo 15, divida este número por 2
até que o resultado da divisão inteira seja menor que 2. Informe o número de divisões.
 Exemplo:
i. 15/2 = 7, sete é maior que 2 então divida
ii. 7/2 = 3, ainda é maior que 2 então
iii. 3/2 = 1, fim.*/

int main()

{
    int n,div;

    printf("Digite um numero: ");
    scanf("%i",&n);
    do
    {
     div= n % 2;
     printf("%i\n", div);
    }
    while(n%2>2);

   // printf(" %i", div);
}
