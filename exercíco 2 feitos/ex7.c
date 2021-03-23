#include<stdio.h>

/*Faça um algoritmo que determine se um dado número informado é positivo, negativo ou
zero.*/

int main ()
{
int n1;

    printf("Digite um número:\n");
    scanf("%i", &n1);

    if (n1<0) {
        printf("Esse numero é negativo");
    }

    else if (n1==0) {
        prisntf("esse numero é zero!");

    }
    else printf("esse numero é positivo");

return 0;
}
