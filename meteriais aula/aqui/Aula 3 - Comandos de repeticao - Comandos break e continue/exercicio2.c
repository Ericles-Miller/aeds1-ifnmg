#include <stdio.h>

/*
2.	Faça um algoritmo que leia 10 números
inteiros imprima a quantidade de números
positivos.
*/


int main()
{
    int i,N,c=0;

    for(i=1;i<=10;i++)
    {
        printf("Digite numero inteiro: ");
        scanf("%i", &N);
        if( N > 0)
        {
          c = c + 1;
        }
    }
    printf("Quantidade de positivos: %i\n",c);


    return 0;
}
