#include <stdio.h>
#include <stdlib.h>

/*
8.	Seja a série de Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, 34,
55,... que pode ser definida recursivamente por:
Então escreva uma função recursiva que gere o termo de
ordem n da série de Fibonacci.
*/
int Fibonacci( int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}


int main()
{
    printf("Fatorial(5): %i\n", Fibonacci(4));
    return 0;
}
