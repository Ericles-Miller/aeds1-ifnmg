#include<stdio.h>

/*Fa�a um algoritmo que determine se um dado n�mero informado � positivo, negativo ou
zero.*/

int main ()
{
int n1;

    printf("Digite um n�mero:\n");
    scanf("%i", &n1);

    if (n1<0) {
        printf("Esse numero � negativo");
    }

    else if (n1==0) {
        prisntf("esse numero � zero!");

    }
    else printf("esse numero � positivo");

return 0;
}
