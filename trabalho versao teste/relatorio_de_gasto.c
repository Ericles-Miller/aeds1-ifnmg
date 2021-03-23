#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "relatorio_de_gasto.h"
float relatorio_de_gasto(TRelatorio)///parametro de cadastro pedido
{
    FILE *file_relat;
    int i;
    float soma;
    if((file_relat = fopen("relatorio_de_gasto.txt", "a")) == NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
    }
    else
    {
        fwrite(al,sizeof(TRelatorio),1,file_relat);
        fclose(file_relat);
    }
    printf(file_relat," A quantidade de pizzas foi %i",);/// var de quantidade fun pedido pizz

    if (quantidade de pizz > 1)
    {
        for (i=1; i<=quantidadepizz; i++ )
        {
            if (pizz->tamanho == 'gigante')
            {
                printf(file_relat,"pizza gigante preço: %.2f\n",);///var tamanho pizza
            }

           else if (pizz->tamanho == 'media')
            {
                 printf(file_relat,"pizza media preço: %.2f\n",);///var tamanho pizza
            }
            else if (pizz->tamanho == 'pequena')
            {
                printf(file_relat,"pizza pequena preço: %.2f\n",);///var tamanho pizza
            }
            printf(file_relat,"ingrediente 1 preço:%.2f ",); /// var do ingrediente
            printf(file_relat,"ingrediente 2 preço:%.2f ",); /// var do ingrediente
            printf(file_relat,"ingrediente 3 preço:%.2f ",); /// var do ingrediente
            printf(file_relat,"ingrediente 4 preço:%.2f ",); /// var do ingrediente
            printf(file_relat,"ingrediente 5 preço:%.2f ",); /// var do ingrediente

        }
        for (i=1; i<=quantidadepizz; i++ )
        {
            soma =quantidadepizz[i] + tamanho[i] + ingrediente1[i] + ingrediente2[i] + ingrediente3[i] + ingrediente4[i] + ingrediente5[i] ;
        }


    }
}
