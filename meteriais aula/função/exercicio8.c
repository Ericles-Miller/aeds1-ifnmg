#include <stdio.h>

/*
8.	Faça uma função que receba como parâmetro um
número inteiro positivo e retorne o fatorial do mesmo.
*/


int fat(int N)
{
    if(N==1||N==0)
    {
        return 1;
    }
    else
    {
        return N*fat(N-1);
    }
}


int fatorial(int N)
{
    int i,fat=1;
    for(i=N;i>=1;i--)
    {
        fat*=i;
    }
    return fat;
}

int main()
{
    printf("Fatorial: %i\n", fat(3));
    printf("Fatorial: %i\n", fat(4));
    printf("Fatorial: %i\n", fat(5));
    printf("Fatorial: %i\n", fat(6));

    return 0;
}
