#include <stdio.h>
/*
5.	Dada uma matriz B 5x6,
determine a linha de B que possui a maior soma de seus
elementos.
*/
#define LINHAS 3
#define COLUNAS 3

int main()
{
    int matriz[LINHAS][COLUNAS];
    int l,c,somas[LINHAS],maior, linha;

    for(l=0;l<LINHAS;l++)
    {
        somas[l] = 0;
        for(c=0;c<COLUNAS;c++)
        {
            printf("(%i,%i): ",l,c);
            scanf("%i",&matriz[l][c]);
            somas[l] = somas[l] + matriz[l][c];
        }
    }
    maior = somas[0];
    linha = 0;
    for(l=1;l<LINHAS;l++)
    {
        if(maior < somas[l])
        {
            maior = somas[l];
            linha = l;
        }
    }
    printf("Linha: %i Soma: %i\n",linha,maior);




    return 0;
}
