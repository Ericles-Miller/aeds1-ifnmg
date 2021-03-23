#include<stdio.h>
#include<stdlib.h>

void alocar_mat(int l,int c)
{
    int i,**m;

    m=(int**)malloc(sizeof(int*)*l);

    for(i=0; i<l; i++)
    {
        m[i]= (int*)malloc(sizeof(int)*c);
    }
}

void entrada_mat(int **mat, int l, int c)
{
    int i,j;
      for(i=0; i<=l; i++)
    {
        for(j=0; j<=c; j++)
        {
            printf("Digite um valor:");
            scanf("%i",(*(mat+i)+j));
        }
    }
}

int soma_mat(int **mat,int l,int c)
{
    int i,j,soma=0;

    for(i=0;i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            soma+= *(*(mat+i)+j);
        }
    }

    return soma;
}
void desalocar_matriz(int **mat,int l)
{
    int i;

    for (i=0;i<l;i++)
    {
        free(mat[i]);
    }

    free(mat);
}

int main()
{
    int **mat[2][2],im_soma_mat;

    alocar_mat(2,2);
    entrada_mat(**mat,2,2);

    soma_mat(**mat,2,2);

    im_soma_mat=soma_mat(**mat,2,2);

    printf("O resultado da soma e:%i",im_soma_mat);


    return 0;
}
