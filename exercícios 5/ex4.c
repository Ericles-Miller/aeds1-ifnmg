#include<stdio.h>
#include<locale.h>
/*4.	Escreva um algoritmo que lê uma matriz M 5x5 e calcula as somas:
a) da linha 4 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz M
Escrever essas somas e a matriz.
*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
   int m[5][5],i,j,soma_l4=0,soma_c2=0,soma_dP=0,somaM=0;


   for(i=0; i<5; i++)
   {
       for(j=0; j<5; j++)
       {
           printf("Digite inteiro da linha %i coluna %i:", i,j);
           scanf("%i", &m[i][j]);
       }
   }

    for(j=0; j<5; j++)
    {
        soma_l4= soma_l4+ m[3][j];
    }

    for (i=0 ; i<=5; i++)
    {
        soma_c2= soma_c2 + m[i][1];
    }

    for(i=0; i<5; i++)
   {
       for(j=0; j<5; j++)
       {
           if (i==j)
            {
                soma_dP= soma_dP + m[i][j];
            }
        }
   }

for(i=0; i<5; i++)
   {
       for(j=0; j<5; j++)
       {
          somaM = somaM +m[i][j];
       }
   }




printf("A soma da linha 4 é:%i ", soma_l4);
printf("A soma da coluna 2 é:%i ",soma_c2);
printf("A soma diagonal principal é:%i ",soma_dP);
printf("A soma da matriz é:%i ",somaM);

return 0 ;
}
