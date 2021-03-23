#include <stdio.h>
#include <stdlib.h>


int* aloca_inteiro()
{
    return (int*)malloc(sizeof(int));
}


int main()
{
    int *b;

    b = aloca_inteiro();
    printf("Digite inteiro: ");
    scanf("%i", b);
    printf("inteiro: %i\n", *b);

    return 0;
}

