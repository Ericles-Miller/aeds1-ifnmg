#include <stdio.h>

/*
9.	Construa um algoritmo que leia um vetor N[20].
Troque a seguir, o 1º elemento com o último, o 2º elemento
com o penúltimo, etc., até trocar o 10º com o 11º.
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
