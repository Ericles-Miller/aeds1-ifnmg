#include<stdio.h>
#include<stdlib.h>
/*14.	Fa�a uma fun��o que receba como par�metro 3 valores inteiros, retorne o maior e o menor elemento por vari�vel global.*/

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
    printf("O maior valor �:%i", recebe_valor(a,b,c));

return 0;
}
