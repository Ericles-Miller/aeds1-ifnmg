#include<stdio.h>
#include<locale.h>
#define tam1 2
#define tam2 6

/*8.Para uma matriz de ordem N x N, determinar:
a)	Soma dos elementos da diagonal principal;
b)	Produto dos elementos da diagonal secundária.
*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
   int n1,n2, m[n1][n2],i,j,soma=0, soma2=0;

    printf("Digite dois inteiros:");
    scanf("%i %i",&n1,&n2);

   for(i=0; i<n1; i++)
   {
       for(j=0; j<n2; j++)
       {
           printf("Digite inteiro da linha %i coluna %i:", i,j);
           scanf("%i", &m[i][j]);
       }
   }

    for(i=0; i<n1; i++)
   {
       for(j=0; j<n2; j++)
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
printf("A soma da diag. principal é: %i\n",soma);
printf("A soma da diag. secundária é: %i",soma2);

   return 0 ;
}
