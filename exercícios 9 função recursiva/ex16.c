#include<stdio.h>
#include<stdlib.h>
/*Crie um programa em C, que contenha uma função recursiva para encontrar o
maior elemento em um vetor. A leitura dos elementos do vetor e impressão do
maior elemento devem ser feitas no main.*/

int maior_numero(int *vet,int i)
{  int maior=vet[1];
    if (i==0)
    {
        return 0;
    }
    else
    {
         maior= maior_numero(vet,i-1);
        if(maior>*(vet+i-1))
        {
            return maior;
        }
        else
        {
            return *(vet+i-1);
        }
    }

}

int main()
{
    int vetor[10],i,chama;

    for (i=0; i<10; i++)
    {
        printf("Digite um numero:");
        scanf("%i",&vetor[i]);
    }

    chama=maior_numero(vetor,10);

    printf("O maior valor é:%i",maior_numero(vetor,i));

return 0;
}
