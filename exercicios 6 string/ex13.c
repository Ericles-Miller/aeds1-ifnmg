#include<stdio.h>
#include<locale.h>
#define tam 12
/* 13.	Faça um algoritmo que receba a temperatura média de cada mês do ano e armazene-as em um vetor. Calcule e mostre a maior
 e a menor temperatura do ano e em que mês elas ocorreram (mostrar o mês por extenso:
1 - Janeiro, 2 - Fevereiro, ...). Obs.: desconsiderar empates.                                                                                                       1 - Janeiro, 2 - Fevereiro, ...). Obs.: desconsiderar empates.
*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float temp[tam],media=0;
    char mes[12][22];
    int i;


    for(i=0; i<=12; i++)
    {
        printf("Digite o mês:");
        scanf("%s",mes[i]);
        printf("Digite a temperatura do mes:");
        scanf("%f", &temp[i]);

    }

return 0;
}

