#include<stdio.h>
#include<stdlib.h>
/*3.Fa�a uma fun��o que receba dois n�meros positivos por par�metro e retorne a soma dos N n�meros inteiros
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

    printf("A soma �: %i", rec);


    return 0;
}

