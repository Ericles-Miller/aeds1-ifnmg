#include<stdio.h>
#include<locale.h>
#define tam 12
/* 13.	Fa�a um algoritmo que receba a temperatura m�dia de cada m�s do ano e armazene-as em um vetor. Calcule e mostre a maior
 e a menor temperatura do ano e em que m�s elas ocorreram (mostrar o m�s por extenso:
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
        printf("Digite o m�s:");
        scanf("%s",mes[i]);
        printf("Digite a temperatura do mes:");
        scanf("%f", &temp[i]);

    }

return 0;
}

