#include<stdio.h>

/*Fa�a um algoritmo que leia tr�s n�meros inteiros, determinar qual o maior valor (imprima
o maior valor).*/

int main ()
{
int n1,n2,n3;

    printf("Digite um n�mero:\n");
    scanf("%i", &n1);
    printf("Digite um n�mero:\n");
    scanf("%i", &n2);
    printf("Digite um n�mero:\n");
    scanf("%i", &n3);

    if (n1> n2 && n1>n3){
        printf("O maior numero �: %i", n1);
    }
    else if (n2>n1 && n2> n3){
        printf("O maior numero �: %i\n", n2);

    }
    else printf("O maior numero �: %i", n3);


return 0;
}
