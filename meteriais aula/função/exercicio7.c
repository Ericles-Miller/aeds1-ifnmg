#include <stdio.h>

/*
7.	Fa�a uma fun��o que receba as tr�s notas
de um aluno como par�metros e uma letra.
Se a letra for A a fun��o calcula a m�dia
aritm�tica das notas do aluno, se for P a
fun��o calcula a m�dia ponderada com
pesos 5, 3 e 2. A m�dia calculada deve ser
devolvida ao fun��o main para, ent�o, ser
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

