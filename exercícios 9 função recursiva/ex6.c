#include<stdio.h>

/*6. A função fatorial duplo é definida como o produto de
todos os números naturais ímpares de 1 até algum
número natural ímpar N. Assim, o fatorial duplo de 5
é 5!! = 1 * 3 * 5 = 15 Faça uma função recursiva que
receba um número inteiro positivo impar N e retorne
o fatorial duplo desse número.*/


int fat_duplo (int a)
{

    if (a==1)
    {
        return 1;
    }

    else
    {
        return a* fat_duplo(a-2);
    }
}


int main()
{
    int n,fat;

    printf("Digite um numero:");
    scanf("%i",&n);

    //fat_duplo(n);

    printf("O resultado e: %i", fat_duplo(n));

    return 0;
}
