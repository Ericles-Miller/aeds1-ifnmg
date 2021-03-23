#include <stdio.h>
#include "Cliente.h"
#pragma once

void imprimir_cliente(Scliente *cli)
{
    printf("Id: %i",cli->id);
    printf("Nome: %s",cli->nome);
    printf("Bairro: %s",cli->bairro);
    printf("Rua: %s",cli->rua);
    printf("Número: %i",cli->numero);

}
void funcao_cad_cli (Scliente *dad)
{

setlocale(LC_ALL, "Portuguese");
 FILE *file_cli;
    file_cli=fopen("cliente.txt","a");///abre o arquivo para gravar


    ///dad.id+=dad.id +1;///tem erro aqui
    printf("\nSeu codigo é: %i", dad->id);
    fprintf(file_cli," \n%i ",dad->id);

    printf("\nDigite seu nome:");
    scanf("%[^\n]s",dad->nome);
    fprintf(file_cli,"%s ",dad->nome);

    printf("\nDigite sua rua:");
    scanf("\n%[^\n]s",dad->rua);
    fprintf(file_cli,"%s ",dad->rua);

    printf("\nDigite o número da casa:");
    scanf("%i",&dad->numero);
    fprintf(file_cli,"%i ",dad->numero);


     printf("\nDigite seu bairro: ");
     scanf("\n%[^\n]s",dad->bairro);
     fprintf(file_cli,"%s\n ",dad->bairro);



    fclose(file_cli);
    system("pause");
}

Scliente * busca_cliente(int id )
{
    FILE *b_cli;

    Scliente *cod_cli=malloc(sizeof(Scliente));

    if ((b=fopen(("cliente.txt","r+"))== Null)
        {
            printf("Arquivo não encontrado");
        }
    else
        {
            while(fread(cod_cli,sizeof(Scliente),1,b_cli)!= 0)
            {
                if(cod_cli->id == id)
                {
                    return cod_cli;
                }
            }
            fclose(b_cli);
            free(cod_cli);
            return NULL;
        }


}

Scliente* alocar_cliente()
{
    return (Scliente*)malloc(sizeof(Scliente));

}
