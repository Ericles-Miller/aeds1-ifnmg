#include <stdio.h>

/*
12.	Uma empresa contrata um encanador a R$280,00 por dia.
Crie um algoritmo que solicite o número de dias
trabalhados pelo encanador e imprima o valor líquido a
ser pago, sabendo que são descontados 8% de imposto de
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
