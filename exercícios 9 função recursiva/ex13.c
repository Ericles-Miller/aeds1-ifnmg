#include<stdio.h>
#include<stdlib.h>

/*Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo par N e
imprima todos os n�meros pares de 0 at� N em ordem crescente.*/

int soma_par(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
       return n + soma_par(n-2);

    }
}




int main()
{
    int n;
    printf("Digite um numero:");
    scanf("%i",&n);

    printf("A soma deu:%i",soma_par(n));

return 0;
}
