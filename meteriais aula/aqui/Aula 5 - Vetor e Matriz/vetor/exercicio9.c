#include <stdio.h>

/*
9.	Construa um algoritmo que leia um vetor N[20].
Troque a seguir, o 1� elemento com o �ltimo, o 2� elemento
com o pen�ltimo, etc., at� trocar o 10� com o 11�.
Mostre o vetor modificado.
*/


int main()
{
    float N[20],aux;
    int i;

    for(i=0;i<20;i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &N[i]);
    }
    for(i=0;i<=9;i++)
    {
        aux = N[i];
        N[i] = N[19-i];
        N[19-i] = aux;
    }
    for(i=0;i<20;i++)
    {
        printf("%f ", N[i]);
    }
    return 0;

}
