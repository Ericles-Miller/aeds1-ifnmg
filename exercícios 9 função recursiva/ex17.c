#include<stdio.h>
#include<stdlib.h>

/*Crie um programa em C, que contenha uma função recursiva para encontrar a
média dos elementos em um vetor. A leitura dos elementos do vetor e
impressão da média dos elementosdevem ser feitas no main.*/

int somando(int *vet,int i)
{ float soma=0;

    if(i==0)
    {
        return 0;
    }
    else
        soma=(float)somando(vet,i-1);
        {
            return soma+ *(vet+i-1);
        }

}

float media_vetor(int *vet,int i,int soma)
{

    if (i==0)
    {
        return i;
    }
    else
    {
        return media_vetor(soma/i);
    }
}
*/
int main()
{
    int vetor[10],i,chama;

    for (i=0; i<10; i++)
    {
        printf("Digite um numero:");
        scanf("%i",&vetor[i]);
    }

    chama=somando(vetor,10);
    //media_vetor()

    printf("O media do vetor é:%i",somando(vetor,i));

return 0;
}
