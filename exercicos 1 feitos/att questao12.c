#include <stdio.h>

/*Uma empresa contrata um encanador a R$80,00 por dia. Crie um algoritmo que solicite o
n�mero de dias trabalhados pelo encanador e imprima o valor l�quido a ser pago, sabendo
que s�o descontados 8% de imposto de renda.*/

int main() {

    int diasT;
    float salario, imposto, salarF;

     printf("digite os dias de trabalho: \n");
     scanf("%i", &diasT);


     salarF= 80*diasT;
     salarF=(salarF*92/100 );

     printf("salario final: %.2f \n", salarF);

return 0;
}
