#include<stdio.h>

/*Fa�a um algoritmo que pe�a para o usu�rio digitar tr�s n�meros. Logo depois imprima
qual o maior valor digitado pelo usu�rio.*/
int main ()
{
int n1,n2,n3;

    printf("Digite tres numeros\n");
    scanf("%i %i %i", &n1 ,&n2 ,&n3);

    if(n1>n2 && n1>n3) {
        printf("%i � o maior n�mero", n1);

    }
    else if (n1<n2 && n2>n3) {
        printf("%i � o maior n�mero", n2);
    }
    else printf("%i � o maior n�mero", n3);
return 0 ;
}
