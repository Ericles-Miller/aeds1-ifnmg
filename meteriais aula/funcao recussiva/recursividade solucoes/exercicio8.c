#include <stdio.h>
/*
8.	Seja a série de Fibonacci: 1, 1, 2, 3, 5, 8,
 13, 21, 34, 55,... que pode ser definida
 recursivamente por:
Então escreva uma função recursiva que gere
o termo de ordem n da série de Fibonacci.
*/

int Fibonacci(int N)
{
    if( N == 1 || N == 2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(N-1)+Fibonacci(N-2);
    }
}

int main()
{
    int a;
    printf("Digite valor inteiro: ");
    scanf("%i",&a);
    printf("Fibonacci = %i\n", Fibonacci( a ));

    return 0;
}
