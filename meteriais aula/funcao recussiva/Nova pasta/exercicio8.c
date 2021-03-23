#include <stdio.h>
/*
8.	Seja a s�rie de Fibonacci: 1, 1, 2, 3, 5, 8,
 13, 21, 34, 55,... que pode ser definida
 recursivamente por:
Ent�o escreva uma fun��o recursiva que gere
o termo de ordem n da s�rie de Fibonacci.
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
