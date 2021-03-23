#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "relatorio_de_gasto.h"
void relatorio_gasto(_Relat *ret  )///parametro a ser passado
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    float soma=0;
    FILE *file_relat;

   /* FILE *p;
    TAluno *a = malloc(sizeof(TAluno));*////buscar no pedido

    if((p = fopen("aluno.bin", "rb")) == NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
    }

    if((file_relat = fopen("relatorio_gasto.txt", "a+b")) == NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
    }
    else
    {

        fprintf(file_relat,"A quantidade de pizzas é: %i\n",); /// struct e var da quant. de pizza

        if (quant.de.pizz >1) ///colocar a var certa
        {
            for (i=1; i<=quant.de.pizz; i++)/// colocar a var certa
            {
                if (pizza == 'gigante')
                {
                    fprintf(file_relat,"Preço da pizza gigante: %.2f\n",); /// preço da pizza
                }
                 else if (pizza == 'media')
                {
                   fprintf(file_relat,"Preço da pizza média: %.2f\n",); /// preço da pizza
                }
                 else if (pizza == 'pequena')
                {
                    fprintf(file_relat,"Preço da pizza pequena: %.2f\n",); /// preço da pizza
                }

                fprintf(file_relat,"Preço do ingrediente 1: %.2f\n",var); /// preço do igrediente
                fprintf(file_relat,"Preço do ingrediente 2: %.2f\n",var); /// preço do igrediente
                fprintf(file_relat,"Preço do ingrediente 3: %.2f\n",var); /// preço do igrediente
                fprintf(file_relat,"Preço do ingrediente 4: %.2f\n",var); /// preço do igrediente
                fprintf(file_relat,"Preço do ingrediente 5: %.2f\n",var); /// preço do igrediente
            }
            for (i=1; i<=quant.de.pizz; i++)/// colocar a var certa
            {
                ret->soma+= tamanho da pizza[i]  + ingrediente1[i] + ingrediente2[i] + ingrediente3[i] + ingrediente4[i] + ingrediente5[i];///mudar as var
            }
             fprintf(file_relat,"O preço final foi de: %.2f", soma);
        }
        else
        {
            if (pizza == 'gigante')
                {
                    fprintf(file_relat,"Preço da pizza gigante: %.2f\n",); /// preço da pizza
                }
                 else if (pizza == 'media')
                {
                    printf(file_relat,"Preço da pizza média: %.2f\n",); /// preço da pizza
                }
                 else if (pizza == 'pequena')
                {
                    fprintf(file_relat,"Preço da pizza pequena: %.2f\n",); /// preço da pizza
                }

                fprintf(file_relat,"Preço do ingrediente 1: %.2f\n",var); /// preço do igrediente
                fprintf(file_relat,"Preço do ingrediente 2: %.2f\n",var); /// preço do igrediente
                fprintf(file_relat,"Preço do ingrediente 3: %.2f\n",var); /// preço do igrediente
                fprintf(file_relat,"Preço do ingrediente 4: %.2f\n",var); /// preço do igrediente
                fprintf(file_relat,"Preço do ingrediente 5: %.2f\n",var); /// preço do igrediente

             ret->soma+= tamanho da pizza  + ingrediente1 + ingrediente2 + ingrediente3 + ingrediente4 + ingrediente5; ///mudar as var

            fprintf(file_relat,"O preço final foi de: %.2f", soma);
        }




        fwrite(al,sizeof(TAluno),1,file_relat);/// parametro .subs TAluno
        fclose(file_relat);
    }
}
_Relat*  aloca_relatorio()/// faz parte da struct v se ta certo
{
    return (_Relat*)malloc(sizeof(_Relat));
}
