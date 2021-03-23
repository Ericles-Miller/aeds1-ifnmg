#include<stdio.h>
#include<locale.h>
#define tam1 2
#define tam2 6
/*6.Considere A uma matriz 7x10. Divida cada elemento da matriz A pelo maior elemento da linha correspondente.
Crie uma nova matriz com o resultado da divisão.


*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
   int m[tam1][tam2],i,j,maior;
   float div[tam1][tam2];


   for(i=0; i<tam1; i++)
   {
       for(j=0; j<tam2; j++)
       {
           printf("Digite inteiro da linha %i coluna %i:", i,j);
           scanf("%i", &m[i][j]);
       }
   }

    for(i=0; i<tam1; i++)
   {
       for(j=0; j<tam2; j++)
       {
         if(m[i][j] == 1 )
         {
             maior=m[i][j];
         }

         if (m[i][j]>maior)
         {
             maior=m[i][j];
         }
       }
   }
   for(i=0; i<tam1; i++)
   {
       for(j=0; j<tam2; j++)
       {
         div[i][j]=(float)m[i][j]/ maior;
       }
   }

   for(i=0; i<tam1; i++)
   {
       for(j=0; j<tam2; j++)
       {
           printf("\nA divisão é: %.2f\n", div[i][j]);
       }
   }

return 0;
}
