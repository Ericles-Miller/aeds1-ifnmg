#include<stdio.h>
float soma(float *vet,int tam)
{
    int i;
    float s=0;
    for(i=0;i<5;i++)
    {
        s+=vet[i];
    } return s;
}
void imprimir_vetor(float *vet,int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
     printf("%.2f\n", *(vet+i));
    }
}
void imprimir_vetor_int(int *vet,int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
     printf("%i\n", *(vet+i));
    }
}

void troca_par(int *vetor,int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
       if(vetor[i]%2==0)
       {
           vetor[i] +=1;
       }
    }
}

int main()
{
    float v[5]={1,2,3,4,5,};
    int t=5;
    int vi[5]={1,2,3,4,5};
    printf("Soma: %.2f\n",soma(v,t));
    imprimir_vetor(v,t);
    printf("\n\n");
    troca_par(vi,t);
    imprimir_vetor_int(vi,t);
    return 0;
}

