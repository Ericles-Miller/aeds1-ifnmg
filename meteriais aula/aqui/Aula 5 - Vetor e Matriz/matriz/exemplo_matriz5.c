#include <stdio.h>

/*
*Declaracao de matriz
* acesso
* leitura e escrita
*/


#define LINHAS 5
#define COLUNAS 5

/* soma dos elementos da diagonal secundaria*/

int main()
{
    int m1[LINHAS][COLUNAS];/* quatro linhas e cinco colunas*/
    int l,c,soma=0;

    for(l=0;l<LINHAS;l++)
    {
        for(c=0;c<COLUNAS;c++)
        {
            printf("(%i,%i): ",l,c);
            scanf("%i",&m1[l][c]);
        }
    }

    c = COLUNAS-1;
    for(l=0;l<LINHAS;l++)
    {
        soma=soma + m1[l][c--];
    }









    return 0;
}
