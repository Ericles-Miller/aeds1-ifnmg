#include <stdio.h>

/*
11.	Faça uma função recursiva que permita
imprimir invertido um número inteiro N.
Ex: 123 –> 321.
*/
void inverta(int N)
{
    if( N/10== 0)
    {
        printf("%i",N);
    }
    else
    {
        printf("%i",N%10);
        inverta(N/10);
    }
}

int main()
{
    int a = 1734;
    inverta(a);
    return 0;
}
