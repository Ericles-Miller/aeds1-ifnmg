#include<stdio.h>

/*Considere um caixa autom�tico com apenas um reposit�rio com capacidade para
armazenar 1000 notas de 10 reais. Elabore um algoritmo para ler um valor e fornecer a
quantidade de notas correspondente a esse valor. O seu algoritmo deve manter a
quantidade de notas no reposit�rio atualizada. Caso o valor lido n�o possa ser fornecido
por falta de notas, o algoritmo deve imprimir uma mensagem indicando o fato. O
algoritmo tamb�m deve imprimir uma mensagem se o valor n�o for m�ltiplo de 10. Ap�s
o tratamento do valor lido, com a impress�o da mensagem ou o fornecimento das notas
correspondentes.*/

int main () {
 float qtnotas= 1000,valor, qtfinal, verificacao;

 printf("Digite o valor do produto\n ");
 scanf("%2.f",&valor);
 if (valor > qtnotas){
    printf("valor insuficiente de notas.");
 }
 verificacao=valor % 10;
 if (verificacao!=0) {
    printf("O numero nao e divisivel por 10");
 }

 else qtfinal=(valor/10);
    printf("A quantidade de notas gastas foi de: %2.f\n ", qtfnal);

return 0;
}
