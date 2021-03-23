#include <stdio.h>

/*
34.	Um hotel deseja fazer uma promoção especial de final de semana,
 concedendo um desconto de 25% na diária. Sendo informados, através
  do teclado, o número de apartamentos do hotel e o valor da diária
    por apartamento para o final de semana completo, elabore um
    programa para calcular:
•	Valor promocional da diária;
•	Valor total a ser arrecadado caso a ocupação neste final de
semana atinja 100%;
•	Valor total a ser arrecadado caso a ocupação neste final de
semana atinja 70%;
•	Valor que o hotel deixará de arrecadar em virtude da promoção,
 caso a ocupação atinja 100%.
*/

int main()
{
   int qtd_apto;
   float diaria,diaria25,valor70,valor100,p;

   printf("Digite quantidade de quartos: ");
   scanf("%i",&qtd_apto);
   printf("Digite valor da diaria: ");
   scanf("%f",&diaria);
   diaria25 = diaria*0.75;
   printf("Valor promocional: %.2f\n",diaria25);
   valor100 = diaria25*qtd_apto*2;
   printf("valor arrecadado por 100%% lotacao: %.2f\n",
          valor100);
   valor70 = diaria25*(qtd_apto*0.7)*2;
   printf("valor arrecadado por 70%% lotacao: %.2f\n",
          valor70);
   p = (diaria*qtd_apto*2) - valor100;
   printf("Valor nao arrecadado: %.2f\n", p);
   return 0;
}









