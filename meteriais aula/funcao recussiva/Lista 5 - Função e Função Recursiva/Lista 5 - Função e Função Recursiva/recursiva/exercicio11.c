#include <stdio.h>
/*
11.	Faça uma função recursiva que permita imprima
invertido um número inteiro N. Ex: 123 – 321.
*/

void imprime_invertido( int N)
{
   if( N % 10 == N ) /* if( N / 10 == 0 )*/
    {
        printf("%i",N);
    }
    else
    {
        printf("%i",N % 10);
        imprime_invertido( N / 10);
    }
}
int main()
{

    imprime_invertido(7);
    printf("\n");
    imprime_invertido(12);
    printf("\n");
    imprime_invertido(123);
    printf("\n");
    imprime_invertido(9876);
    return 0;
}
