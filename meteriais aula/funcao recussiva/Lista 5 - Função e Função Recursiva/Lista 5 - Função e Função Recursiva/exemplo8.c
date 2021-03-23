#include <stdio.h>
#include <stdlib.h>

#define L 3
#define C 3

void imprimir_matriz_estatica( int m[3][3] )
{
    int l, c;

    for(l=0;l<L;l++)
    {
        for(c=0;c<C;c++)
        {
            printf("%i ",m[l][c]);
        }
        printf("\n");
    }
}

void ler_matriz_estatica( int m[3][3] )
{
    int l, c;

    for(l=0;l<L;l++)
    {
        for(c=0;c<C;c++)
        {
            scanf("%i", &m[l][c]);
        }
    }
}


void imprimir_matriz_dinamica( int **m, int ql, int qc )
{
    int l, c;

    for(l=0;l<ql;l++)
    {
        for(c=0;c<qc;c++)
        {
            printf("%i ", m[l][c]);
        }
        printf("\n");
    }
}

void ler_matriz_dinamica( int **m, int ql, int qc )
{
    int l, c;

    for(l=0;l<ql;l++)
    {
        for(c=0;c<qc;c++)
        {
            scanf("%i",&m[l][c]);
        }
    }
}

int main()
{
    int matriz[3][3]={1,2,3,4,5,6,7,8,9};
    int i, **mat = (int**)malloc(sizeof(int*)*3);

    for(i=0;i<3;i++)
    {
        mat[i] = (int *)malloc(sizeof(int)*3);
    }

    /*
    erro ao passa matriz estatica para parametro **
    ler_matriz_dinamica(matriz, L, C);
    imprimir_matriz_dinamica(matriz, L, C);
    */

    ler_matriz_dinamica(mat, L, C);
    imprimir_matriz_dinamica(mat, L, C);
    ler_matriz_estatica(matriz);
    imprimir_matriz_estatica(matriz);

    return 0;
}
