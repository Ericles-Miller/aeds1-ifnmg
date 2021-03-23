#include <stdio.h>

/*
18.	Construa um algoritmo que leia um conjunto
não determinado de pares de valores M e N (parar
quando algum dos valores for menor ou igual a zero
). Para cada par lido, mostre:
•	a sequência do menor até o maior, inclusive;
•	a soma dos inteiros consecutivos do menor até
 o maior, inclusive.
*/

int main()
{
    int N,M,seq,soma=0;

    do
    {
        printf("\nDigite valores para M e N: ");
        scanf("%i%i",&M,&N);
        if(M <= N)
        {
            for(seq=M;seq <= N;seq++)
            {
                printf("%i ", seq);
                soma=soma + seq;
            }
            printf("Soma: %i\n",soma);
        }
        else
        {
           for(seq=N;seq <= M;seq++)
            {
                printf("%i ", seq);
                soma=soma + seq;
            }
            printf("Soma: %i\n",soma);
        }
    soma = 0;
    }
    while( M > 0 && N > 0);
    return 0;
}
