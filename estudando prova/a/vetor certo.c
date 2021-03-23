#include<stdio.h>
#include<stdlib.h>


int soma(int *v,int t)
{

    if(t==0)
    {
        return 0;
    }
    else
    {

       return  *(v+t-1)+ soma(v,t-1);

    }
}


int main()
{
    int v[10],i,resultado;
    for(i=0;i<10;i++)
    {
        printf("Digite numero inteiro:");
        scanf("%i",&v[i]);
    }
    resultado=soma(v,10);
    printf("a soma foi:%i",resultado);

    return 0;
}
