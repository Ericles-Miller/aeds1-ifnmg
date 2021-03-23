#include<stdio.h>
#include <stdlib.h>


int main()
{
    int vet[10], i,maior;

    for (i=1;i<=10; i++)
    {
         printf("numero:");
         scanf("%i",&vet[i]);
    }

    printf("Numero maior: %i",numero_maior(vet,10));

    return 0;
}

int numero_maior(int *vet,int t)
{
    int m;

   if(t==1)
   {
       return vet[0];
   }
   else
{
        m= numero_maior(vet,t-1);
        if(m>vet[t-1])
        {
          return m;
        }
        else
        {
            return vet[t-1];
        }

    }
}










