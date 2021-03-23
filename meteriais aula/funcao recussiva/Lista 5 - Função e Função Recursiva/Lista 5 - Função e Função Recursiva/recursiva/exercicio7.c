#include <stdio.h>

/*
7.	Faça uma função recursiva, em linguagem C, que calcule o
valor da série S descrita a seguir para um valor n>0 a ser
fornecido como parâmetro para a mesma.
    S = 2 + 5/2 + 10/3 + (1+n^2) / n
*/
 float serie( int n)
 {
    if( n == 1)
    {
        return 2;
    }
    else
    {
        return (n*n + 1)/(float)n + serie(n-1);
    }
 }

int main()
{

    printf("N = 1 serie: %.2f\n", serie(1));
    printf("N = 2 serie: %.2f\n", serie(2));
    printf("N = 3 serie: %.2f\n", serie(3));

    return 0;
}
