#include<stdio.h>
#include<stdlib.h>
/*3.Faça uma função que receba dois números positivos por parâmetro e retorne a soma dos N números inteiros
existentes entre eles.*/

int somaN (int a, int b )
{
    int i,somando=0;

    for (i=a+1; i<b; i++)
    {
        somando+= i;
    }
return somando;
}

int main()
{
    int x,y,rec;

    printf("digite dois valores ");
    scanf("%i %i",&x, &y);

    rec=somaN(x,y);

    printf("A soma é: %i", rec);


    return 0;
}

