#include <stdio.h>

int main()
{
    int i, vetor[5],soma=0;

    for(i=0;i<=4;i++)
    {
        printf("Digite valor inteiro: ");
        scanf("%i",&vetor[i]);
        soma = soma + vetor[i];
    }
    printf("Soma: %i\n", soma);

    for(i=0;i<=4;i++)
    {
        printf("%i ", vetor[i]);
    }



    return 0;
}
