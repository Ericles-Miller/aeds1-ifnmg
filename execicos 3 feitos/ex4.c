#include<stdio.h>

/*Construa um algoritmo que imprima os 50 primeiros n�meros pares a partir do n�mero
zero.*/

 int main()
{
    int a,n1;

    printf("Digite um numero");
    scanf("%i", &n1);
for (a=0; a<=n1; a++)
{
    if (a>0 && a%2==0)
    {
        printf("Os numeros s�o:%i ",a );
    }
}
}
