#include<stdio.h>
#include<stdlib.h>
int maior(int *v,int t)
{
    int m;
    if(t==0)
    {
        return 0;
    }
    else
    {
        m= maior(v,t-1);
        if(m>*(v+t-1))
        {
            return m;
        }
        else
        {
            return *(v+t-1);
        }
    }
}
int main()
{
    int t;
    printf("Digite tamanho do vetor:");
    scanf("%i",&t);
    int v[t],i;
    for(i=0;i<t;i++)
    {
        printf("Digite numero inteiro:");
        scanf("%i",&v[i]);
    }

    printf("Maior:%i",maior(v,t));
    return 0;
}
