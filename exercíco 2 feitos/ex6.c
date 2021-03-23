#include<stdio.h>

/*Faça um algoritmo que leia um número inteiro N, determine se esse número é par ou não
(Um número inteiro é par se o mesmo for divisível exatamente por 2). &quot;O problema pode
ser resolvido tomando-se o resto da divisão inteiro do número N por 2&quot;.*/

int main ()
{
int n1;

    printf("Digite um número:\n");
    scanf("%i",&n1);

    if (n1%2 == 0) {
        printf("numero é par:");
    }

    else printf("esee numero é impar");

return 0;
}
