#include<stdio.h>

/*Faça um algoritmo que peça para o usuário digitar três números. Logo depois imprima
qual o maior valor digitado pelo usuário.*/
int main ()
{
int n1,n2,n3;

    printf("Digite tres numeros\n");
    scanf("%i %i %i", &n1 ,&n2 ,&n3);

    if(n1>n2 && n1>n3) {
        printf("%i é o maior número", n1);

    }
    else if (n1<n2 && n2>n3) {
        printf("%i é o maior número", n2);
    }
    else printf("%i é o maior número", n3);
return 0 ;
}
