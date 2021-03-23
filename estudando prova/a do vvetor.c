#include<stdio.h>
#include<stdlib.h>


int soma(int *v,int n,int somando)
{
     printf("Numero:");
    scanf("%i",&v[n]);

    if (n==1)
    {
        return v[n];
    }
    else
    {
        somando+=v[n-1];
    }
}


int main()
{
int v[10],n,somando=0,i;



for(i=1; i<11; i++)
{
    soma(v[i],10,somando);
}



printf("o resultado foi: %i",soma(v[i],10,somando));


    return 0;
}
