#include<stdio.h>

/*
16.	Construa  um algoritmo para calcular
o fatorial de número.
*/

int main(){

 int n1,fat=1;

    printf("Digite um numero: ");
    scanf("%i",&n1);

    while(n1>=1)
    {
        fat= fat*n1;

        n1--;
    }
 printf("O valor do somatorio e: %i\n", fat);

 return 0;
}
