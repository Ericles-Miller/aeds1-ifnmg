#include <stdio.h>

/*
2.	Construa um algoritmo que leia um vetor
V[6]. Conte a seguir, quantos valores de V
são negativos e mostre essa informação.
*/

int main()
{
    int V[6],i,neg=0;

    for(i=0;i<6;i++)
    {
        printf("Digite valor inteiro: ");
        scanf("%i", &V[i]);
        if(V[i] < 0)
        {
            neg++;
        }
    }
    printf("Qtd negativos: %i\n",neg);

    return 0;
}
