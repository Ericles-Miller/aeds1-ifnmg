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
    int *p,i;
    printf("char: %i\n",sizeof(char));
    printf("int: %i\n",sizeof(int));
    printf("float: %i\n",sizeof(float));
    printf("long long int: %i\n",sizeof(long long int));

    p = (int *)malloc( sizeof(int)*N );
    for(i=0; i<N; i++)
    {
        printf("Digite valor inteiro: ");
        scanf("%i", p+i);
        /*scanf("%i", &p[i]);*/
    }
        for(i=0; i<N; i++)
    {
        printf("%i\n", *(p+i));
        /*scanf("%i", &p[i]);*/
    }


    free(p);



    return 0;
}
