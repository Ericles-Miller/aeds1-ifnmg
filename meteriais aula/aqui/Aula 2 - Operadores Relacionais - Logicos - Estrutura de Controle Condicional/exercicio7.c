#include <stdio.h>

/*
7.	Fa�a um algoritmo que determine se um dado
n�mero informado � positivo, negativo ou zero.
*/
int main()
{
    int N;
    printf("Digite numero inteiro: ");
    scanf("%i", &N);
    if( N > 0)
     printf("Positivo\n");
    else
    if( N < 0)
     printf("Negativo\n");
    else
      printf("Zero\n");

    return 0;
}
