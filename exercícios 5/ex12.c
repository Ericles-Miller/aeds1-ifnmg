#include<stdio.h>
#include<locale.h>
#define tam 3
/* 12.	Elabore um algoritmo para gerar a seguinte matriz:
| 1	2    3   4   |
| 2	4    6   8   |
| 3	6    9   12 |
| 4	8   12  16

*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
   int m[tam],m2[tam][tam],i,j;


   for(i=0; i<tam; i++)
   {
        printf("Digite inteiro %i:", i);
        scanf("%i", &m[i]);

   }

   for(i=1; i<tam; i++)
   {
       for(j=0; j<tam; j++)
       {
           m2[i][j]= m[j]*2;
       }
   }
   for(i=0; i<tam; i++)
   {
       for(j=0; j<tam; j++)
       {
           printf("%i",m2[i][j]);
       }
   }

return 0;
}


