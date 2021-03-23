#include <stdio.h>

/*
Faça uma algoritmo que leia vinte numeros inteiros e
imprima o maior e o menor elemento;
*/

int main()
{
    int i,N,maior, menor;
    for(i=1;i<=5;i++)
    {
        printf("Digite valor inteiro: ");
        scanf("%i",&N);
        if(i == 1)
        {
            maior = N;
            menor = N;
        }
        if( N > maior )
        {
            maior = N;
        }

        if( N < menor )
        {
            menor = N;
        }
    }
    printf("O maior elemento: %i\n", maior);
    printf("O menor elemento: %i\n", menor);

    return 0;
}




