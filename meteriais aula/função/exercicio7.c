#include <stdio.h>

/*
7.	Faça uma função que receba as três notas
de um aluno como parâmetros e uma letra.
Se a letra for A a função calcula a média
aritmética das notas do aluno, se for P a
função calcula a média ponderada com
pesos 5, 3 e 2. A média calculada deve ser
devolvida ao função main para, então, ser
mostrada.
*/

float media (float a, float b, float c, char tm)
{
    if( tm == 'a' || tm == 'A')
    {
        return (a+b+c)/3;
    }
    else
    {
        return (a*5+b*3+c*2)/10;
    }
}
int main()
{
    float n1, n2,n3;
    char m;

    printf("Digite tipo da media: ");
    scanf("%c",&m);
    printf("Digite tres notas: ");
    scanf("%f%f%f",&n1,&n2,&n3);
    printf("Media: %.2f\n",media(n1,n2,n3,m));

    return 0;
}

