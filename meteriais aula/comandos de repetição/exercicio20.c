#include <stdio.h>

/*
20.	Fa�a um algoritmo que receba v�rios n�meros,
calcule e mostre:
�	A soma dos n�meros digitados;
�	A quantidade de n�meros digitados;
�	A m�dia dos n�meros digitados
�	O maior n�mero digitado;
�	O menor n�mero digitado;
�	A m�dia dos n�meros pares;
�	A percentagem dos n�meros �mpares entre todos os
n�meros digitados.
Finaliza a entrada de dados com a digita��o do n�mero
30000.
*/

int main()
{
    int N,soma=0,c = 0,maior,menor,s_pares=0;
    int c_pares = 0;
    float media,m_pares=0,i_perc;

    do
    {
        printf("Digite numero inteiro: ");
        scanf("%i",&N);
        if( N != 30000)
        {
            soma += N;
            c++;
            if(c == 1)
            {
                menor = N;
                maior = N;
            }
            if( N > maior)
            {
                maior = N;
            }
            if( N < menor )
            {
                menor = N;
            }
            if( N % 2 == 0)
            {
                s_pares = s_pares + N;
                c_pares++;
            }
        }
    }
    while(N != 30000);
    printf("Soma: %i\n", soma);
    printf("Quantidade: %i\n", c);
    media = (float)soma / c;
    printf("Media: %.2f\n",media);
    printf("Maior: %i\n", maior);
    printf("Menor: %i\n", menor);
    if( c_pares != 0)
       m_pares = (float)s_pares / c_pares;
    printf("Media dos pares: %.2f\n",m_pares);
    i_perc = (float)(c-c_pares)/c * 100;
    printf("Percentagem de impares: %.2f\n",i_perc);
    return 0;
}





