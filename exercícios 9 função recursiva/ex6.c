#include<stdio.h>

/*6. A fun��o fatorial duplo � definida como o produto de
todos os n�meros naturais �mpares de 1 at� algum
n�mero natural �mpar N. Assim, o fatorial duplo de 5
� 5!! = 1 * 3 * 5 = 15 Fa�a uma fun��o recursiva que
receba um n�mero inteiro positivo impar N e retorne
o fatorial duplo desse n�mero.*/


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
