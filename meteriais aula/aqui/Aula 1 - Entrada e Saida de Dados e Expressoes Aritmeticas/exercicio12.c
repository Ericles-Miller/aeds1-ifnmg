#include <stdio.h>

/*
12.	Uma empresa contrata um encanador a R$280,00 por dia.
Crie um algoritmo que solicite o n�mero de dias
trabalhados pelo encanador e imprima o valor l�quido a
ser pago, sabendo que s�o descontados 8% de imposto de
renda.
*/

int main()
{
    float dias,bruto,liquido;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f", &dias);
    bruto = 280.0 * dias;
    liquido = bruto * 0.92;
    printf("Liquido: %.2f\n",liquido);
    return 0;
}
