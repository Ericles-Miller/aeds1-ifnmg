#include <stdio.h>

/*
33.	 Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo
que leia do teclado o número total de eleitores, o número de votos do
primeiro candidato e o número de votos do segundo candidato. Em seguida,
o algoritmo deverá apresentar o percentual de votos de cada um dos
candidatos e o percentual de votos nulos.
*/

int main()
{
    int eleitores, votos1, votos2;
    float p1, p2, pnulos;

    printf("Digite total de eleitores: ");
    scanf("%i", &eleitores);
    printf("Digite quantidade de votos do primeiro candidato: ");
    scanf("%i", &votos1);
    printf("Digite quantidade de votos do segundo candidato: ");
    scanf("%i", &votos2);
    p1 = (float)votos1 / eleitores * 100;
    printf("percentual do candidato 1: %.2f %%\n",p1);
    p2 = (float)votos2 / eleitores * 100;
    printf("percentual do candidato 2: %.2f %%\n",p2);
    pnulos = 100 - (p1+p2);
    printf("percentual de votos nulos: %.2f %%\n",pnulos);



    return 0;
}
