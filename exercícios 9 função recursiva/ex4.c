#include<stdio.h>

/*Faça uma função recursiva chama fatorial () que receba um número inteiro
positivo n como argumento e retorne o fatorial de n.*/


int fatorial (int a)
{
    if (a<=0)
    {
        return 0;
    }
    if (a==1)
    {
        return 1;
    }

    else
    {
        return a* fatorial(a-1);
    }
}


int main()
{
    int n,fat;

    printf("Digite um numero:");
    scanf("%i",&n);

    fat=fatorial(n);

    printf("O resultado e: %i", fatorial(n));

    return 0;
}
