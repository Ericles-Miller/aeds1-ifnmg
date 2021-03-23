#include<stdio.h>
#include<stdlib.h>
#define tam 5
/*20.Faça uma função que receba, por parâmetro, dois vetores de dez números inteiros, determine e mostre o vetor intersecção
 dos dois vetores*/

int vetor (int l)
{
    int *v;

    v=(int *)malloc(sizeof(int)*l);

return v;
}
int vetor2(int l)
{
    int *vet;
     vet=(int *)malloc(sizeof(int)*l);
}

void receber_valor(int *v, int *vet, int l)
{
    int i,j;

    for (i=0; i<l; i++)
    {
        printf("Digite o numero:");
        scanf("%i",v+i);
    }
    for (j=0; j<l; j++)
    {
        printf("Digite o numero:");
        scanf("%i",vet+j);
    }

}

void interceccao(int *v,int *vet,int l)
{
    int i, j,n=0,vet_inter[10];
    for (i=0; i<l; i++)
    {
        for (j=0; j<l; j++)
        {
            if (v[i]==vet[j])
            {
                vet_inter[i]=v[i];
            }
        }
    }
for (i=0; i<l; i++)
    {
        printf("%i",vet_inter[i]);
    }
}

int main()
{
    int *v,*vet,f,i;

    v=vetor(10);
    vet=vetor2(10);

    receber_valor(v,vet,10);
return 0;
}

