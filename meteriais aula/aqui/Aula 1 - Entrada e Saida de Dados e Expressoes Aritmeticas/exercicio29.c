#include <stdio.h>

/*
29.	Pedro comprou um saco de ração com peso em quilos (Kg).
Pedro possui dois gatos para os quais fornece a quantidade de ração
em gramas. Faça um programa que receba o peso do saco de ração e a
quantidade de ração fornecida para cada gato. Calcule e mostre
quanto que restará de ração no saco após cinco dias e também 15 dias.
*/

int main()
{
    float peso, qtdgato1,qtdgato2;
    float resto5,resto15;

    printf("Digite o peso do saco de racao(kg): ");
    scanf("%f",&peso);
    printf("Digite quantidade de racao para gato 1 e 2(g): ");
    scanf("%f%f", &qtdgato1, &qtdgato2);
    resto5 = (peso * 1000) - (qtdgato1+qtdgato2)*5;
    resto15 = (peso * 1000) - (qtdgato1+qtdgato2)*15;
    printf("Resto apos 5 dias: %.2f\n", resto5);
    printf("Resto apos 15 dias: %.2f\n", resto15);
    return 0;
}




