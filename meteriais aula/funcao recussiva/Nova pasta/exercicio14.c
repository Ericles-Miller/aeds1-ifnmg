#include <stdio.h>
/*
14.	Fa�a uma fun��o recursiva que receba um n�mero
inteiro positivo  N e imprima todos os n�meros pares
de 0 at� N em ordem decrescente.
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
