#include <stdio.h>

/*
13.	Construa um algoritmo que, para um grupo
de N valores reais,  determine o valor máximo
 e o valor mínimo.
*/
int main()
{
    int N,i;
    float r,maior, menor;

    printf("Digite quantidade: ");
    scanf("%i",&N);
    for(i=1;i<=N;i++)
    {
        printf("Digite valor real: ");
        scanf("%f",&r);
        if(i == 1)
        {
            maior = r;
            menor = r;
        }
        if( r > maior)
        {
            maior = r;
        }
        if(r < menor)
        {
            menor = r;
        }
    }
    printf("Maior: %.2f\n",maior);
    printf("Menor: %.2f\n",menor);
    return 0;
}
