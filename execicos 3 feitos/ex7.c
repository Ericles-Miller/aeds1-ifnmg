#include<stdio.h>
/*Fa�a um algoritmo que some todos os n�meros compreendidos entre -10 � 100 e exiba o
resultado.*/

int main()
{
    int i,contanumero=0;

    for (i=-10; i<=10; i++)
    {
    contanumero=contanumero + i++;
    }
    printf("A soma dos valores e: %i", i);

return 0;
}
