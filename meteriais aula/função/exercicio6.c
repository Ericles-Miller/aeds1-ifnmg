
#include <stdio.h>
/*
6.	O n�mero 3025 possui a seguinte
caracter�stica:
30 + 25 = 55
55^2 = 3025
Fa�a uma fun��o que receba um n�mero
inteiro de quatro d�gitos e retorne 1
se o n�mero possuir essa caracter�stica e 0,
caso contr�rio.
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
