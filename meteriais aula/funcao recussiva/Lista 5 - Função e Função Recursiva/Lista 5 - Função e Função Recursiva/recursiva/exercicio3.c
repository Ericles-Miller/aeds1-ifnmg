#include <stdio.h>
#include <stdlib.h>

/*
3.	Fa�a uma fun��o recursiva chama potencia() que aceite dois argumentos
inteiros positivos i e j. A fun��o retorna i elevado a pot�ncia j.
Por exemplo: potencia(2,3) � igual a 8.
*/
int potencia ( int b, int e)
{
    if( e == 0)
    {
        return 1;
    }
    else
    {
        return b * potencia(b, e-1);
    }
}

int main()
{
    printf("Pontencia(3,5): %i\n", potencia(3,3));
    return 0;
}
