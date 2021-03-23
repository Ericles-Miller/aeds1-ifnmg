#include <stdio.h>
#include <stdlib.h>

/*
2.	Faça uma função recursiva chama soma () que receba um número inteiro positivo n
como argumento e retorne a soma dos a primeiros números inteiros. Por exemplo,
se a função receber n = 5, deverá retornar 15, pois 15 = 1+2+3+4+5.
*/

int soma( int n)
{
    if( n == 1)
    {
        return 1;
    }
    else
    {
        return n + soma(n-1);
    }
}

int main()
{
    printf("%i\n", soma( 5 ));
    return 0;
}
