#include<stdio.h>
#include<stdlib.h>
/*1.Fa�a uma fun��o que retorne a soma de tr�s n�meros reais passados como par�metro.*/

float soma (float a, float b, float c)
{
    float s;
    a=10;
    b=20;
    c=30;
    s= a+b+c;

    return s;
}

int main()
{
    float t,a,b,c;
    t=soma(a,b,c);
    printf("O valor �: %.2f",t );


    return 0;
}
