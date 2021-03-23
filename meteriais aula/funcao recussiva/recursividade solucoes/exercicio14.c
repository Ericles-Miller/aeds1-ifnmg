#include <stdio.h>
/*
14.	Faça uma função recursiva que receba um número
inteiro positivo  N e imprima todos os números pares
de 0 até N em ordem decrescente.
*/

void par( int N)
{
    if(N == 0)
    {
        printf("0 ");
    }
    else
    if( N % 2 == 0)
    {
        printf("%i ", N);
        par(N-2);
    }
    else
    {
        par(N-1);
    }

}
int main()
{
    par(11);

    return 0;
}
