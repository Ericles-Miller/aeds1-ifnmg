#include <stdio.h>
/*
8.	Faça um algoritmo que leia três números inteiros,
determinar qual o maior valor (imprima o maior valor).
*/

int main()
{
    int a,b,c;
    printf("Digite tres numeros inteiros: ");
    scanf("%i%i%i", &a,&b,&c);

    if( a >= b && a >= c)
    {
        printf("O maior eh: %i\n", a);
    }
    else
    if( b >= a && b >= c)
    {
        printf("O maior eh: %i\n", b);
    }
    else
    {
        printf("O maior eh: %i\n", c);
    }



    return 0;
}
