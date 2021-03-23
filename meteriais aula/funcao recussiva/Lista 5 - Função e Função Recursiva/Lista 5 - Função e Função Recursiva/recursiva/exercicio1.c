#include <stdio.h>
#include <stdlib.h>

/*
1.	Faça uma função recursiva chama multiplicacao() que
receba dois número inteiro positivo n1 e n2 como argumento
e retorne a multiplicação dos dois números inteiros.
Por exemplo, se a função receber n1 = 3 e n2 = 4,
deverá retornar 12, pois 12 = 3+3+3+3.
*/

int multiplicacao( int a, int b)
{
    if( b == 0)
    {
        return 0;
    }
    else
    {
        return a + multiplicacao(a,b-1);
    }

}



int main()
{
    printf("2x4: %i\n", multiplicacao(2,4));
    return 0;
}
