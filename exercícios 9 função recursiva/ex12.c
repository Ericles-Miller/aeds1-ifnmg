#include<stdio.h>
#include<stdlib.h>

int soma (int *vet, int i)
{
    if(i ==1)
    {
        return vet[i-1];
    }
    else
    {
       return *(vet + i-1)+ soma(v,i-1);
    }



}

int main()
{
   int s, vet[10];


   for(int i=0; i<10; i++)
   {
        printf("Numero");
        scanf("%i",&vet[i]);
   }
   s=soma(vet,10);

return 0;

}


