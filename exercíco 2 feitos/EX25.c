#include<stdio.h>

/*Construa um algoritmo para calcular a �rea (AREA) de uma sala, sendo que os
comprimentos das paredes (L e C) s�o fornecidos pelo usu�rio. Apresente a �rea depois de
calculada.*/

int main(){

float l,c, area;

printf("Digite os valores de 'l' e 'c' :\n");
scanf(" %f %f",&l,&c);

area = l*c;

printf("A �rea da sala �: %2.f", area);

return 0;
}
