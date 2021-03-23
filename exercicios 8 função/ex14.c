#include<stdio.h>
#include<stdlib.h>
/*14.	Faça uma função que receba como parâmetro 3 valores inteiros, retorne o maior e o menor elemento por variável global.*/

int a,b,c,maior;

int recebe_valor(int n1, int n2,int n3)
{


    maior=n1;

    if (maior<n2 && n2>n3)
    {
        maior=n2;

    }
    else if (maior<n3 && n2<n3)
    {
        maior=n3;

    }


return maior;
}

int main()
{
    int n;
    printf("Digite tres valores:");
    scanf("%i%i%i",&a,&b,&c);

    n=recebe_valor(a,b,c);
    printf("O maior valor é:%i", recebe_valor(a,b,c));

return 0;
}
