#include <stdio.h>

/*
12.	Faça uma função recursiva que permita
somar os elementos de um vetor de inteiros.
*/
int soma( int *v, int t)
{
    if(t == 1)
    {
        return v[t-1];
    }
    else
    {
        return v[t-1] + soma(v, t-1);
    }
}

int main()
{
    int vetor[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Soma: %i\n",soma(vetor,10));
    return 0;
}


