#include<stdio.h>
#include<stdlib.h>

/*2. Fa�a uma fun��o recursiva chama soma () que receba um n�mero inteiro
positivo n como argumento e retorne a soma dos  primeiros n�meros inteiros.
Por exemplo, se a fun��o receber n = 5, dever� retornar 15, pois 15 =
1+2+3+4+5.*/
int soma(int n)
{
    if (n==0)
    {
        return 0;
    }

    else
    {
        return n+ soma(n-1);
    }
}

int main()
{
    int n,f;

    printf ("Digite um numero:");
    scanf("%i",&n);
    f=soma(n);

    printf("A soma foi de:%i", soma(n));

}
