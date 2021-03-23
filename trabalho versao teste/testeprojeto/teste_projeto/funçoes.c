#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "estrutura.h"


void cliente_cadastro (_Cliente dad )
{

setlocale(LC_ALL, "Portuguese");
    dad.id+=1;///tem erro aqui

    printf("Digite seu nome:");
    scanf("%s",dad->nome);

    printf("Digite sua rua:");
    scanf("%s", dad->rua);

    printf("Digite o número da casa:");
    scanf("%i", &dad->numero);

     printf("Digite seu bairro:");
    scanf("%s", dad->bairro);
///precisa de um retorno...
}

void *cliente_exibir(_cliente *dad)
{

    printf("Digite seu nome: %s",dad->nome);
    printf("Digite sua rua:%s", dad->rua);
    printf("Digite o número da casa:%i", &dad->numero);
    printf("Digite seu bairro:%s", dad->bairro);


}
/*
void *cadastro_igrediente(_Ingre *pizz)
{
    printf("Digite o número de ingrediente:");
    scanf("%i",&pizz->n);

    if(n<0)
    {
        return 0;
    }
    else
    {
        pizz->cod+= 1;
        printf("\n Id do produto:%i",pizz->cod);
        printf("\nDigite o nome do ingrediente:");
        scanf("%s",pizz->nom_ingre);
        printf("\nDigite o preço:");
        scanf("%f",&pizz->preco);
        printf("\nDigite a quantidade do ingrediente %i:",pizz->estoque);
        scanf("%i",&pizz->estoque);
    return *cadastro_ingrediente(n-1);///VER SE ESTAR CERTO

}




int pedido *fazer_pedido()
{
    printf("Digite o 1° ingrediente:");
    scanf("%s",montagem->ingre1);

    if (montagem->ingre1[i]!=nom_ingre[i])
    {
        printf("Não temos esse ingrediente!");

    }
    else
    {
        if(estoque[i]<0)
        {
            return null;
        }
        else
        {
            _Ingre->estoque=-1;
        }
    }


    printf("Digite o 2° ingrediente:");
    scanf("%s",montagem->ingre2);

     if (montagem->ingre2[i]!=nom_ingre[i])
    {
        printf("Não temos esse ingrediente!");
    }
    else
    {

    }

    printf("Digite o 3° ingrediente:");
    scanf("%s",montagem->ingre3);

     if (montagem->ingre3[i]!=nom_ingre[i])
    {
        printf("Não temos esse ingrediente!");
    }

    printf("Digite o 4° ingrediente:");
    scanf("%s",montagem->ingre4);

     if (montagem->ingre4[i]!=nom_ingre[i])
    {
        printf("Não temos esse ingrediente!");
    }

    printf("Digite o 5° ingrediente:");
    scanf("%s",montagem->ingre5);

     if (montagem->ingre5[i]!=nom_ingre[i])
    {
        printf("Não temos esse ingrediente!");
    }

    printf("Digite o tipo de massa A auta e F fina:");
    scanf("%c",&montagem->massa);

    if (montagem->massa!='a'|| montagem->massa!='A'|| montagem->massa!='f'|| montagem->massa!='F' )
    {
        printf("Valor inválido:");
    }

    printf("Digite o tamanho da pizza P pequena M média e G grande:");
    scanf("%c",&montagem->tamanho);

    if (montagem->tamanho!='p'|| montagem->tamanho!='P'|| montagem->tamanho!='m'|| montagem->tamanho!='M'||
        montagem->tamanho!='g'|| montagem->tamanho!='G')
        {
            printf("Valor inválido:");
        }


}*/


