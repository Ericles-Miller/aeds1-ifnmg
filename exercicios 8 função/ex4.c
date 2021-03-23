#include<stdio.h>
#include<stdlib.h>
/*4.Faça uma função que receba três números inteiros: a,b e c, onde a é maior que 1. A função
 deve somar todos os inteiros entre  b e c que sejam divisíveis por a (inclusive b e c)
  e retornar o resultado para a função main()..*/

int somadiv (int a, int b, int c)
{   int soma=0,i;

    for(i=b; i<=c; i++)
    {
        if (i%a==0)
        {
            soma+= i;
        }
    }
return soma;
}

int main()
{
    int t,a,b,c;

    printf("Digite 3 numeros:");
    scanf("%i %i %i",&a ,&b ,&c);

    t=somadiv(a,b,c);

    printf("A soma é:%i", t );


    return 0;
}

