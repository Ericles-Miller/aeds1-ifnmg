#include <stdio.h>


/*
17.	Construa um algoritmo que dado um número,
por exemplo 15, divida este número por 2 até que
o resultado da divisão inteira seja menor que 2.
Informe o número de divisões.
•	Exemplo:
i.	15/2 = 7, sete é maior que 2 então divida
ii.	 7/2 = 3, ainda é maior que 2 então
iii.	3/2 = 1, fim.
*/

int main()
{
    int N,c=0;

    printf("Digite valor inteiro: ");
    scanf("%i",&N);
    while( N >= 2)
    {
        N = N / 2;
        c++;
    }
    printf("Quantidade: %i\n",c);
    return 0;
}



