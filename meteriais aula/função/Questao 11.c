#include<stdio.h>
#include<stdlib.h>
int **alocar_matriz(int l,int c)
{
    int **m,i;
    m= (int **)malloc(sizeof(int*)*l);
    for(i=0;i<l;i++)
    {
        m[i]=(int*)malloc(sizeof(int)*c);
    }
    return m;
}
void ler_matriz(int ** m,int l,int c)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Digite valor inteiro:");
            scanf("%i",(*(m+i)+j));

        }
    }
}
void imprimir_matriz(int **m,int l,int c)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%i\n",*(*(m+i)+j));

        }
    }
}
int soma(int **m,int l,int c)
{
    int i,j,s=0;
    for(i=0;i<l;i++)
    {
            for(j=0;j<c;j++)
            {
                s+=*(*(m+i)+j);
            }

    }
    return s;
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
    int **m;
    m=alocar_matriz(2,2);
    ler_matriz(m,2,2);
    imprimir_matriz(m,2,2);
    printf("Soma: %i\n",soma(m,2,2));
    desalocar_matriz(m,2);
    return 0;
}
