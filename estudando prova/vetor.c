#include<stdio.h>
#include<stdio.h>

int vetor(int *v,int t)
{
    int soma;
    if (t==0)
    {
        return 0;
    }
    else
    {
        return soma+=  vetor*(v+t-1)
    }
}

 soma=(float)somando(vet,i-1);
        {
            return soma+ *(vet+i-1);
        }


int main()
{
    int v[3];
    for (int i=0; i<3; i++)
    {
         printf("\nDigite um numero:");
         scanf("%i",&v[i]);
    }

    printf("\nSoma:%i",vetor(v+1,3));

    return 0;
}
