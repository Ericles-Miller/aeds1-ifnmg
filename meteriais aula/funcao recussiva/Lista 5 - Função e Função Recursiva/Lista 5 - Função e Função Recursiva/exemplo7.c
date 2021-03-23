#include <stdio.h>
#include <stdlib.h>

int **alocar_matriz(int l, int c)
{
    int i, **m;
    m = (int**)malloc(sizeof(int*)*l);
    for(i=0;i<l;i++)
    {
        m[i] = (int*)malloc(sizeof(int)*c);
    }
    return m;
}

void ler_matriz(int **m, int l, int c)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%i",&m[i][j]);
        }
    }
}

void imprimir_matriz(int **m, int l, int c)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%i ",m[i][j]);
        }
        printf("\n");
    }
}

void desalocar_matriz(int **m, int l)
{
    int i;
    for(i = 0; i <l;i++)
    {
        free(m[i]);
    }
    free(m);
}

#define L 3
#define C 3

int main()
{
    int **matriz;

    matriz = alocar_matriz(L,C);
    ler_matriz(matriz, L,C);
    printf("\n");
    imprimir_matriz(matriz,L,C);
    desalocar_matriz(matriz,L);
    return 0;
}

