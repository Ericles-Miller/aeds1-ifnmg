#include<stdio.h>
#include<stdlib.h>
void imprimi_vetor1(int *v, int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        printf("%i",v(i));
    }
}
void imprimi_vetor2(int v{}, int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        printf("%i",v(i));
    }
}
void imprimi_vetor3(int v[10], int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        printf("%i",v(i));
        v[1]+=1;
    }
}
int main()
{
    int vetor[10]={1,2,3,4,5,6,7,8,9,10};
    int *vet= (int*)malloc(sizeof(int)*10);
    vet[0]=1;
    vet[1]=2;
    vet[2]=3;
    vet[3]=4;
    vet[4]=5;
    vet[5]=6;
    vet[6]=7;
    vet[7]=8;
    vet[8]=9;
    vet[9]=10;

    return 0;
}
