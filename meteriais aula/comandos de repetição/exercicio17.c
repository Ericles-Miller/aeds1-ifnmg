#include <stdio.h>


/*
17.	Construa um algoritmo que dado um n�mero,
por exemplo 15, divida este n�mero por 2 at� que
o resultado da divis�o inteira seja menor que 2.
Informe o n�mero de divis�es.
�	Exemplo:
i.	15/2 = 7, sete � maior que 2 ent�o divida
ii.	 7/2 = 3, ainda � maior que 2 ent�o
iii.	3/2 = 1, fim.
*/

int main()
{
    int N,c=0;

    printf("Digite valor inteiro: ");
    scanf("%i",&N);
    while( N >= 2)
    {
        N = N / 2;
        c++;
    }
    printf("Quantidade: %i\n",c);
    return 0;
}



