#include<stdio.h>
#define tam 5
#define aiai 5
#include<locale.h>


/*10.	Uma matriz quadrada inteira � chamada de "quadrado m�gico" se a soma dos elementos de cada linha,
a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secund�ria s�o todos iguais.
Exemplo: A matriz abaixo representa um quadrado m�gico:
   |  8  0   7  |
   |  4  5   6  |
   |  3 10  2  |
*/
int main()
{
setlocale(LC_ALL, "Portuguese");

   int i ,matriz[3][3],soma1,soma2,soma3;

   for(i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
       {
           printf("Digite a bosta do n�mero:");
           scanf("%i",&matriz[i][j]);


       }


   }
