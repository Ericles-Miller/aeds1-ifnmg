#include<stdio.h>
#include<stdlib.h>

/*11.Faça uma função que receba como parâmetro uma matriz de inteiros de 4x10 elementos e retorne a soma de
 todos os inteiros da matriz.

*/

int ** alocar_matriz(int l ,int c)
{
    int **p,i;
    p=(int **)malloc(sizeof(int *)*l);
 for (i=0; i<l; i++)
   {

        p[i]=(int *)malloc(sizeof(int )*c);
    }
    return p;
}

void receber_valor(int **p, int l, int c)
{
    int i,j;
    for (i=0; i<l; i++)
   {
       for (j=0; j<c; j++)
       {
           printf("Digite um numero:");
           scanf("%i",(*(p+i)+j));
       }
   }

}

int somando(int **p, int l, int c)
{
    int i,j,soma=0;

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
   int **p;

    p= alocar_matriz(2,2);
    receber_valor(p,2,2);
    printf("A soma foi de: %i", somando(p,2,2));
    desalocar_matriz(p,2);
return 0;
}

