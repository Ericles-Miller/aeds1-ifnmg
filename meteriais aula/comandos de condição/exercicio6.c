#include <stdio.h>
/*
6.	Fa�a um algoritmo que leia um n�mero
inteiro N, determine se esse n�mero � par
ou n�o (Um n�mero inteiro � par se o mesmo
for divis�vel exatamente por 2). "O problema
 pode ser resolvido tomando-se o resto da
 divis�o inteiro do n�mero N por 2".
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
