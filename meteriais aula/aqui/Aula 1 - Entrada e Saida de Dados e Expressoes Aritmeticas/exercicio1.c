#include <stdio.h>

//comentario de linha

/*
   comentario de bloco
*/

/*
1.	Faça um algoritmo que leia dois valores
    do tipo real e efetue a soma e imprima o
    resultado.
*/

int main()
{
    float n1,n2,res;
    printf("Digite valor real: ");
    scanf("%f",&n1);
    printf("Digite valor real: ");
    scanf("%f",&n2);
    res = n1+n2;
    printf("Resultado: %.2f\n",res);
    return 0;
}





