#include <stdio.h>

/*
Funcao:

<tipo de retorno> <nome> (< lista de parametros>)
{
    corpo da funcao
}
int
float
char
int *
float **
*/

float media(float a, float b, float c)
{
    float m;
    m = (a+b+c)/3;
    return m;
}
int main()
{
    float n1,n2,n3,r;
    printf("Digite tres notas: ");
    scanf("%f%f%f",&n1,&n2,&n3);
    r = media(n1,n2,n3);
    printf("Media: %.2f\n",r);
    return 0;
}
