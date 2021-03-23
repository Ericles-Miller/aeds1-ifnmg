#include <stdio.h>
#include <stdlib.h>
#include "ingrediente.h"

void *cadastro_igrediente(_Ingre *pizz)
{
   /* printf("Digite o número de ingrediente:");
    scanf("%i",&pizz->n);*/

        FILE *file_ingre;

        file_ingre=fopen("cadastro_ingre.txt","a");
       // pizz->cod=0;///

       printf("Digite o código:");
       scanf("%i",&pizz->cod);
       fprintf(file_ingre,"%i",pizz->cod);


        fprintf(file_ingre, "\n %i ",pizz->cod);

        printf("\nDigite o nome do ingrediente:");
        scanf("%s",pizz->nom_ingre);
        fprintf(file_ingre," %s ",pizz->nom_ingre);

        printf("\nDigite o preço:");
        scanf("%f",&pizz->preco);
        fprintf(file_ingre,"%.2f ",pizz->preco);

        printf("\nDigite a quantidade do ingrediente :",pizz->estoque);
        scanf("%i",&pizz->estoque);
        fprintf(file_ingre,"%i\n ",pizz->estoque);

        fclose(file_ingre);
        system("pause");

}

_Ingre*  aloca_ingrediente()
{
    return (_Ingre*)malloc(sizeof(_Ingre));
}
