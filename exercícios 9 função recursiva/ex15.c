4#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
int menor (int *vet, int i)
{
    int menor1;

    if(i ==0)
    {
       return vet ;
    }
    else
    {
        if (menor1> vet-1)
        {
            menor1= vet-1;
        }

            return printf("menor %i",menor1) ;
    }

}

int main()
{
    int n;

printf("quantidade");
scanf("%i",&n);

int  vet[n];

   for(int i=0; i<n; i++)
   {
        printf("Numero:");
        scanf("%i",&vet[i]);
   }
   menor(vet,n);

return 0;

}

