#include <stdio.h>


/*
2.	Fa�a um algoritmo que leia dois valores do tipo
inteiro e efetue a divis�o e imprima o resultado.
*/

int main()
{
    int n1,n2;
    float r;
    printf("Digite dois valores inteiros: ");
    scanf("%i %i",&n1,&n2);
    r = n1 / (float)n2;
    printf("Resultado: %.2f\n",r);

    return 0;
}





