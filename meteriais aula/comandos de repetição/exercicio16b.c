#include <stdio.h>

/*
16.	Construa  um algoritmo para calcular
o fatorial de número.
*/

int main()
{
    int N,fat=1;

    printf("Digite valor inteiro positivo: ");
    scanf("%i",&N);
    while(N>=1)
    {
        fat = fat * N;
        N--;
    }
    printf("\nFatorial: %i\n", fat);

    return 0;
}
