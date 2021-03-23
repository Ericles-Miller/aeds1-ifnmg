#include <stdio.h>

/*
7.	Faça um algoritmo que some todos os números
compreendidos entre -10 à 100 e exiba o resultado.
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
