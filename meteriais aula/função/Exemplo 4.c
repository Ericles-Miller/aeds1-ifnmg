#include<stdio.h>
#include<stdlib.h>
float ** alocar_matriz(int linha,int coluna)
{
    int i;
    float **m = (float**)malloc(sizeof(float*)*linha);
    for(i=0;i<linha;i++)
    {
        m[i]=(float*)malloc(sizeof(float)*coluna);
    }
    return m;
}
void ler_matriz(float **m,int l,int c)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Digite valor real:");
            scanf("%f",&m[i][j]);
        }
    }
}
void imprimir_matriz(float **m,int l,int c)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%.2f\n",m[i][j]);

        }
    }
}
void desalocar_matriz(float **m,int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        free(m[i]);
    }
    free(m);
}
int main()
{
    float **mat;
    mat=alocar_matriz(2,2);
    ler_matriz(mat,2,2);
    imprimir_matriz(mat,2,2);
    desalocar_matriz(mat,2);


    return 0;
}
