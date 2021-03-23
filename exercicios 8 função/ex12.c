#include<stdio.h>
#include<stdlib.h>

/*12.Faça uma função que receba como parâmetro uma matriz de inteiros e retorne a soma de todos os inteiros do matriz.*/

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
    int **m;

    m=alocar_matriz(2,2);
    ler_matriz(m,2,2);

    printf("A soma da matriz foi de:%i",soma_inteiro(m,2,2));

    desalocar_matriz(m,2);
    return 0;
}
