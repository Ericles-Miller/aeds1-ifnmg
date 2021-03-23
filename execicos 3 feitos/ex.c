#include<stdio.h>

/*Faça um algoritmo que leia 10 números inteiros imprima a quantidade de números pares,
ímpares, positivos e negativos.*/

int main()
{
    int i,n,n_pares=0,n_positivos=0,n_impar=0,n_negativo=0;

for (i=1; i>=10; i++) {

    printf("Digite um numero");
    scanf("%i", &n);
if (n>0 )
{
      n_positivos= n_positivos +1;

    if ( n%2==0)
    {
        n_pares= n_pares +1;
    }
    else n_impar= n_impar +1;
}

    else if (n< 0)
    {
      n_negativo= n_negativo +1;
     if ( n%2==0)
    {
        n_pares= n_pares +1;
    }
    else n_impar= n_impar +1;

    }
}

printf("A quantidade de numeros são:%i %i %i %i", n_pares ,n_positivos ,n_impar ,n_impar );

return 0;

}








