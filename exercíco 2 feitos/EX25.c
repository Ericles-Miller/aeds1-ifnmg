#include<stdio.h>

/*Construa um algoritmo para calcular a área (AREA) de uma sala, sendo que os
comprimentos das paredes (L e C) são fornecidos pelo usuário. Apresente a área depois de
calculada.*/

int main(){

float l,c, area;

printf("Digite os valores de 'l' e 'c' :\n");
scanf(" %f %f",&l,&c);

area = l*c;

printf("A área da sala é: %2.f", area);

return 0;
}
