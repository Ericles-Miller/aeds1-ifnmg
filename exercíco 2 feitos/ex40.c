#include<stdio.h>

/*Considere um caixa automático com apenas um repositório com capacidade para
armazenar 1000 notas de 10 reais. Elabore um algoritmo para ler um valor e fornecer a
quantidade de notas correspondente a esse valor. O seu algoritmo deve manter a
quantidade de notas no repositório atualizada. Caso o valor lido não possa ser fornecido
por falta de notas, o algoritmo deve imprimir uma mensagem indicando o fato. O
algoritmo também deve imprimir uma mensagem se o valor não for múltiplo de 10. Após
o tratamento do valor lido, com a impressão da mensagem ou o fornecimento das notas
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
