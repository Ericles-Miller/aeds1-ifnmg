#include <stdio.h>

/*
7.	Faça uma função recursiva, em linguagem C,
que calcule o valor da série S descrita a seguir
para um valor n>0 a ser fornecido como parâmetro para
a mesma.

S = 2 + 5/2 + 10/3 + (1+n^2) / n

*/

float serie_s(int N)
{
    if(N == 1)
    {
        return 2;
    }
    else
    {
        return (1+N*N)/(float)N + serie_s(N-1);
    }
}

int main()
{
    int a;
    printf("Digite valor inteiro: ");
    scanf("%i",&a);
    printf("S = %.2f\n", serie_s( a ));

    return 0;
}





