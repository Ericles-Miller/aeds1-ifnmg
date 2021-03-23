#include <stdio.h>

/*
*Declaracao de matriz
* acesso
* leitura e escrita
*/

int main()
{
    int m1[4][5];/* quatro linhas e cinco colunas*/
    int l,c;

    for(l=0;l<4;l++)
    {
        for(c=0;c<5;c++)
        {
            printf("(%i,%i): ",l,c);
            scanf("%i",&m1[l][c]);
        }
    }

    for(l=0;l<4;l++)
    {
        for(c=0;c<5;c++)
        {
            printf("%i ",m1[l][c]);
        }
        printf("\n");
    }








    return 0;
}
