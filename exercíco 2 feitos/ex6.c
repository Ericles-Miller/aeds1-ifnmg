#include<stdio.h>

/*Fa�a um algoritmo que leia um n�mero inteiro N, determine se esse n�mero � par ou n�o
(Um n�mero inteiro � par se o mesmo for divis�vel exatamente por 2). &quot;O problema pode
ser resolvido tomando-se o resto da divis�o inteiro do n�mero N por 2&quot;.*/

int main ()
{
int n1;

    printf("Digite um n�mero:\n");
    scanf("%i",&n1);

    if (n1%2 == 0) {
        printf("numero � par:");
    }

    else printf("esee numero � impar");

return 0;
}
