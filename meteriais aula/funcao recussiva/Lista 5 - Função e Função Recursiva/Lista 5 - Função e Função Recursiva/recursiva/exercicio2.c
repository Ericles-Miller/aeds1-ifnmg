#include <stdio.h>
#include <stdlib.h>

/*
2.	Fa�a uma fun��o recursiva chama soma () que receba um n�mero inteiro positivo n
como argumento e retorne a soma dos a primeiros n�meros inteiros. Por exemplo,
se a fun��o receber n = 5, dever� retornar 15, pois 15 = 1+2+3+4+5.
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
