#include<stdio.h>
//Fa�a um algoritmo que leia 10 n�meros inteiros imprima a quantidade de n�meros positivos.

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

    printf("A quantidade de numeros positivos �: %i", n_positivos);

return 0;
}

