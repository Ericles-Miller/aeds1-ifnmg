#include <stdio.h>

/*
7.	Fa�a um algoritmo que some todos os n�meros
compreendidos entre -10 � 100 e exiba o resultado.
*/


int main()
{
    int s,soma=0;
    for(s = -10; s<=100; s++)
    {
      soma = soma + s;
    }
    printf("Soma: %i\n",soma);



    return 0;
}
