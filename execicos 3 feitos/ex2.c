#include<stdio.h>
//Faça um algoritmo que leia 10 números inteiros imprima a quantidade de números positivos.

int main()
{
    int i,n,n_positivos=0;

    for(i=1; i<=10; i++)
{
        printf("Digite um numero:\n");
        scanf("%i",&n);

    if(n > 0)
    {
        n_positivos= n_positivos +1;
    }
}

    printf("A quantidade de numeros positivos é: %i", n_positivos);

return 0;
}

