#include <stdio.h>
#include <stdlib.h>

#define N 5

    /*Alocacao dinamica de vetor e matriz
      biblioteca:  #include <stdlib.h>
        funcao malloc():
          - recebe como argumento quantidade
          de bytes para alocacao;
          - retorna o endereco da primeira
            posicao do vetor no formato void *
        funcao free():
          - recebe o endereco de memoria para
            desalocacao;
        sizeof():
          -  recebe uma estrutura(tipo,variavel,registro)
             como parametro e retorna quantos bytes
             sao usados para armazenamento

    */
int main()
{
    int **p,i,j;

    p = (int**)malloc( sizeof(int*)*3);
    for(i=0;i<3;i++)
    {
        p[i] = (int*)malloc(sizeof(int)*3);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Dgite valor inteiro: ");
            scanf("%i",&p[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%i",p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
