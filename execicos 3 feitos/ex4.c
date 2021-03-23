#include<stdio.h>

/*Construa um algoritmo que imprima os 50 primeiros números pares a partir do número
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
        printf("Os numeros são:%i ",a );
    }
}
}
