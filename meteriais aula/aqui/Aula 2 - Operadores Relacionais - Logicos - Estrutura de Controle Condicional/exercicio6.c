#include <stdio.h>
/*
6.	Faça um algoritmo que leia um número
inteiro N, determine se esse número é par
ou não (Um número inteiro é par se o mesmo
for divisível exatamente por 2). "O problema
 pode ser resolvido tomando-se o resto da
 divisão inteiro do número N por 2".
*/
int main()
{
    int N,resto;
    printf("Digite numero inteiro: ");
    scanf("%i", &N);
    resto = N % 2;
    if(resto == 0)
        printf("Par\n");
    else
        printf("Impar\n");


    return 0;
}
