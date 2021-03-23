#include<stdio.h>
#include<stdlib.h>

/*13.Faça uma função que receba como parâmetro uma matriz de inteiros com 6 colunas e retorne a soma de
 todos os inteiros do matriz.*/

int **alocar_matriz(int l, int c)
{
    int i,j,**p;

    p=(int **)malloc(sizeof(int *)*l);
    for (i=0; i<l; i++)
    {
        p[i]=(int*)malloc(sizeof(int)*c);
    }
return p;
}

void ler_matriz(int **p, int l, int c)
{
     int i,j;
      for (i=0; i<l; i++)
      {
        for (j=0; j<c; j++)
          {
              printf("Digite u valor:");
              scanf("%i",(*(p+i)+j));
          }
      }
}

int soma_inteiro(int **p,int l, int c)
{
    int i,j, soma=0;

    for (i=0; i<l; i++)
      {
        for (j=0; j<c; j++)
          {
              soma+= *(*(p+i)+j);
          }
      }
return soma;
}


void desalocar_matriz(int **p, int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        free(p[i]);
    }
    free(p);
}


int main()
{
    int **m,l;

    printf("Digite o numero de linhas da matriz");
    scanf("%i",&l);

    m=alocar_matriz(l,6);
    ler_matriz(m,l,6);

    printf("A soma da matriz foi de:%i",soma_inteiro(m,l,6));

    desalocar_matriz(m,l);
    return 0;
}

