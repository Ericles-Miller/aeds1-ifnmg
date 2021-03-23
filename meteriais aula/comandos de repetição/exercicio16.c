#include <stdio.h>

/*
16.	Construa  um algoritmo para calcular
o fatorial de número.
*/

int main()
{
    int N,fat=1,a;

    printf("Digite valor inteiro positivo: ");
    scanf("%i",&N);
    for(a = N; a >= 1; a--)
    {
       fat = fat * a;
    }
    printf("Fatorial: %i\n", fat);

    return 0;
}
