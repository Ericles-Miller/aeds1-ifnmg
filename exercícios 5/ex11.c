#include<stdio.h>
#include<locale.h>
#define tam 3
/* |  8  0   7 |
   |  4  5   6 |
   |  3  10  2 |

11.	Escreva um programa que verifica se uma matriz de n linhas e n colunas representa um quadrado mágico.

*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
   int n1,n2, m[tam][tam],i,j,soma=0, soma2=0, somaL=0,somaC=0,cont1=0,cont2=0;


   for(i=0; i<tam; i++)
   {
       for(j=0; j<tam; j++)
       {
           printf("Digite inteiro da linha %i coluna %i:", i,j);
           scanf("%i", &m[i][j]);
       }
   }

    for(i=0; i<tam; i++)
   {
       for(j=0; j<tam; j++)
       {
            if(i==j)
            {
                soma= soma + m[i][j];
            }
       }
   }
   for(i=n1; i<0; i--)
   {
       for(j=n2; j<0; j--)
       {
            if(j==i)
            {
                soma2= soma2 + m[i][j];
            }
       }
   }

      for(j=0; j<tam; j++)
      {
         somaL+= m[i][j];
          printf("\nLinha %i resultado: %i\n",i,somaL);

      }


     for(i=0; i<tam; i++)
    {
      for(j=0; i<tam; i++)
       {
          somaC+= m[i][j];
          printf("\nColuna %i resultado: %i\n",i,somaC);
       }
    }

    printf("diagonal p. %i", soma);





  return 0;
  }
