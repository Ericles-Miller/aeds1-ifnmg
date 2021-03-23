#include<stdio.h>
/*Faça um algoritmo que some todos os números compreendidos entre -10 à 100 e exiba o
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
