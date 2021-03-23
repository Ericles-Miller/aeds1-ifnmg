#include <stdio.h>

/*
27.	Faça um algoritmo que, tendo como dados
de entrada a altura e o sexo de um pessoa,
calcule seu peso ideal utilizando as seguintes
 fórmulas:
•	Homens: Peso ideal = 72.7 * h - 58
•	Mulheres: Peso ideal = 62.1 * h - 44.7
*/
int main()
{
    float altura,pesoideal;
    char sexo;
    printf("Digite altura: ");
    scanf("%f", &altura);
    printf("Digite sexo: ");
    scanf("\n%c",&sexo);

    switch(sexo)
    {
    case 'm':
    case 'M':
        pesoideal = 72.7 * altura - 58;
        printf("Peso ideal masculino: %.2f\n", pesoideal);
        break;
    case 'f':
    case 'F':
        pesoideal = 62.1 * altura - 44.7;
        printf("Peso ideal feminino: %.2f\n", pesoideal);
        break;
    default:
        printf("sexo invalido\n");
    }
    return 0;
}
