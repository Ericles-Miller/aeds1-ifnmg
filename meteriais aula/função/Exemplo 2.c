#include<stdio.h>
#include<stdlib.h>
int* alocar_vetor_inteiro(int tam)
{
    int *v ;
    v =(int*)malloc(sizeof(int)*tam);
    return v;
}
float media_vetor_inteiro(int *vet,int tam)
{
    int i,soma=0;
    float media;
    for(i=0;i<tam;i++)
    {
        soma+= vet[i];
    }
    media=(float)soma/tam;
    return media;
}
 void ler_vetor_inteiro(int *vet,int tam)
 {
     int i;
     for(i=0;i<tam;i++)
     {
         printf("Digite valor inteiro:");
         scanf("%i",vet+i);
     }
 }
 void imprimir_vetor_inteiro(int *vet,int tam)
 {
     int i;
     for(i=0;i<tam;i++)
     {

         printf("%i ",*(vet+i));
     }
 }

int main ()
{
    int *p;
   p= alocar_vetor_inteiro(7);
   ler_vetor_inteiro(p,7);
   printf("Media:%.2f\n",media_vetor_inteiro(p,7));
   imprimir_vetor_inteiro(p,7);
   free(p);
    return 0;
}
