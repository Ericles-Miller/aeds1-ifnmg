
#include <stdio.h>
/*
6.	O número 3025 possui a seguinte
característica:
30 + 25 = 55
55^2 = 3025
Faça uma função que receba um número
inteiro de quatro dígitos e retorne 1
se o número possuir essa característica e 0,
caso contrário.
*/
int num( int N)
{
    int p1,p2,s1;
    p1 = N/100;
    p2 = N%100;
    s1 = p1+p2;
    s1 *=s1;
    if( s1 == N)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("Resultado: %i\n",num(3025));
    printf("Resultado: %i\n",num(3026));

    return 0;
}
