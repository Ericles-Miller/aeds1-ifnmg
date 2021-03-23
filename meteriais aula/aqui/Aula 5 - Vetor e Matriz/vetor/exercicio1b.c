#include <stdio.h>

/*
1.	Considerando como dados as notas de uma
determinada turma (56 alunos) em um prova, escreva
um algoritmo que imprima aquelas notas que estão
acima da média das notas.
*/

int main()
{
    float soma=0.0,media;
    int i,N;

    printf("Digite quantidade de alunos: ");
    scanf("%i",&N);
    float notas[N];

    for(i=0;i<N;i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        soma+=notas[i];
    }
    media = soma / N;
    printf("Media da turma: %.2f\n",media);
    for(i=0;i<N;i++)
    {
        if( notas[i] > media)
        {
            printf("%.2f\n",notas[i]);
        }
    }
    return 0;
}
