#include<stdio.h>
#include<stdlib.h>
/*1.Faça uma função que retorne a soma de três números reais passados como parâmetro.*/

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
    printf("O valor é: %.2f",t );


    return 0;
}
