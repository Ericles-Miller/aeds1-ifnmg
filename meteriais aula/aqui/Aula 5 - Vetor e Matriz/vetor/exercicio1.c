#include <stdio.h>

/*
1.	Considerando como dados as notas de uma
determinada turma (56 alunos) em um prova, escreva
um algoritmo que imprima aquelas notas que estão
acima da média das notas.
*/

#define TAM 5

int main()
{
    float notas[TAM],soma=0.0,media;
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        soma+=notas[i];
    }
    media = soma / TAM;
    printf("Media da turma: %.2f\n",media);
    for(i=0;i<TAM;i++)
    {
        if( notas[i] > media)
        {
            printf("%.2f\n",notas[i]);
        }
    }
    return 0;
}
