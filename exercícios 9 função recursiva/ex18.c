#include <stdio.h>
#include <stdlib.h>

/*18. Escreva uma função recursiva que determine quantas vezes um dígito K ocorre
em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em
762021192.*/


int repete(int n,int *v, int i)
{

    if (i==0)
    {
        return 0;
    }
    else
    {
        if(n==v+i)
        {
           int cont=0;
           cont+=1;
        }
        return  repete(v,(i-1));
    }

    return cont;
}

int main()
{
    int n1,n2,i,n;
    printf("Digite o numero de ALGARISMOS DO NUMERO:");
    scanf("%i",&n1);

    int v[n1];
    for(i=0; i<n1; i++)
    {
        printf("Digite o  numero :");
        scanf("%i",&v[n1]);
    }
    int n;
    printf("Digite um numero N:");
    scanf("%i",&n);
    repete(n,&v[n1],n1);
return 0;
}
