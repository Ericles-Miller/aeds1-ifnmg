#include <stdio.h>
#include <stdlib.h>

/*
4.	Fa�a uma fun��o recursiva chama fatorial () que
receba um n�mero inteiro
positivo n como argumento e retorne o fatorial de n.
*/

int fatorial( int n)
{
    if( n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n*fatorial(n-1);
    }
}

int main()
{
    printf("Fatorial(5): %i\n", fatorial(5));
    return 0;
}
