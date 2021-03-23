#include<stdio.h>
#include<stdlib.h>

/*2.	Crie um algoritmo para preencher e imprimir os elementos de vetor com um certo valor. Para varrer o vetor,
 não utilize índices, use apenas aritmética de ponteiros. Faça isto para os vetores de inteiros e de reais.*/

int main()
{

    int i,soma=0;
    int *pv=NULL;

    pv = (int *)malloc(sizeof(int)*5);



  //  int s[n];//variavel

    for (i=0; i<5; i++)
    {
        printf("Digite um inteiro:");
        scanf("%i",&pv[i]);
       // y=&s[i];
    }

    for (i=0; i<5; i++)
    {
         printf("\nVETOR: %p %i\n",pv[i],pv[i]);
    }
    for(i=0; i<5; i++)
    {
      free(pv);
    }

     for(i=0; i<5; i++)
    {
       printf("%p %i\n",pv);
    }


return 0;
}
