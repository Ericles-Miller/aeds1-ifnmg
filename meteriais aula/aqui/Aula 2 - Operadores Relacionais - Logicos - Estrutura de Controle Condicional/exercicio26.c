#include <stdio.h>
#include <math.h>

/*
26.	Faça um algoritmo que leia três valores e
verifique se estes podem representar os lados de um
triângulo. Em caso afirmativo, especificar o tipo do
triângulo. Para que os valores representem os lados
de um triângulo, é necessário que qualquer um dos
lados seja menor ou igual que a soma dos outros dois
lados. Um triângulo pode ser classificado como
equilátero, isósceles ou escaleno.
*/
int main()
{
    int a,b,c,modulo_b_c;
    printf("Digite tres lados referentes ao um triangulo: ");
    scanf("%i%i%i",&a,&b,&c);
    /*| b - c | < a < b + c*/
    modulo_b_c = fabs( double(b-c) );
    if(modulo_b_c < a && a < b+c )
    {
        printf("lados formam um triangulo.\n");


    }
    else
    {
        printf("lados nao formam um triangulo.\n");


    }

    return 0;
}


