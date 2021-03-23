#include <stdio.h>

/*
6.	A fun��o fatorial duplo � definida
como o produto de todos os n�meros
naturais �mpares de 1 at� algum n�mero
natural �mpar N. Assim, o fatorial duplo
de 5 � 5!! = 1 * 3 * 5 = 15 Fa�a uma
fun��o recursiva que receba um n�mero
inteiro positivo impar N e retorne o
fatorial duplo desse n�mero.
*/

int fat_duplo(int N)
{
    if( N == 1)
    {
        return 1;
    }
    else
    {
        return N * fat_duplo(N-2);
    }
}
int main()
{
    int a;
    printf("Digite valor inteiro impar: ");
    scanf("%i",&a);
    printf("Fatorial Duplo: %i\n", fat_duplo(a));

    return 0;
}





