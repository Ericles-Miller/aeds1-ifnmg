#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "relatorio_de_gastos.h"
#include "pedido.h"
#include "Cliente.h"
#include "ingrediente.h"


void relatorio_gasto(montagem *gasto )
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    FILE *file_relat;
    _Relat *somador
    _Ingre *preco;


    ///buscar no pedido

    if((file_relat = fopen("relatorio_gastos.txt", "a+")) == NULL)
    {
        printf("Arquivo nao pode ser aberto\n");
    }
    else
    {

        fprintf(file_relat,"A quantidade de pizzas é: %i\n",gasto->qtd_de_pizza); /// struct e var da quant. de pizza

        if (gasto->qtd_de_pizza >1) ///colocar a var certa
        {
            for (i=1; i<=gasto->qtd_de_pizza; i++)/// colocar a var certa
            {
                if (gasto->tamanho == 'g')
                {   somador->tamanho_da_pizza= 20;
                    fprintf(file_relat,"Preço da pizza gigante: %.2f\n",somador->tamanho_da_pizza); /// preço da pizza
                }
                 else if (gasto->tamanho == 'm')
                {   somador->tamanho_da_pizza=10;
                   fprintf(file_relat,"Preço da pizza média: %.2f\n",somador->tamanho_da_pizza); /// preço da pizza
                }
                 else if (gasto->tamanho == 'p')
                {   somador->tamanho_da_pizza=5;
                    fprintf(file_relat,"Preço da pizza pequena: %.2f\n",somador->tamanho_da_pizza); /// preço da pizza
                }
            /// ************** preço dos ingredientes**********************************

                FILE *mostra_ingre;
                _Ingre *mostrar;
                mostrar = aloca_ingrediente();

            if (gasto->ingre1== preco->cod)
                    {

                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p1=preco->preco;
                            fprintf(file_relat,"\nPreço do ingrediente: %.2f ",somador->p1);
                        }
                    }

            /// ***********************************

             if (gasto->ingre2== preco->cod)
                    {



                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p2=preco->preco;
                            fprintf(file_relat,"\nPreço do ingrediente: %.2f ",somador->p2);
                        }
                    }


                }
                ///****************************************************

             if (gasto->ingre3== preco->cod)
                {



                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p3=preco->preco;

                            fprintf(file_relat,"\nPreço do ingrediente: %.2f ",somador->p3);
                        }
                    }
                }

          ///***********************************************************


           if (gasto->ingre4== preco->cod)
                    {



                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p4=preco->preco;

                            fprintf(file_relat,"\nPreço do ingrediente: %.2f ",somador->p4);
                        }
                    }

                }


        ///******************************************************


             if (gasto->ingre5== preco->cod)
                    {



                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p5=preco->preco;
                            fprintf(file_relat,"\nPreço do ingrediente: %.2f ",somador->p5);
                        }
                    }
                    }
                    }

            }
            for (i=1; i<=gasto->qtd_de_pizza; i++)/// colocar a var certa
            {
                somador->soma+= somador->tamanho_da_pizza+ somador->p1 + somador->p2 + somador->p3 + somador->p4 + somador->p5 ;///mudar as var
            }
             fprintf(file_relat,"O preço final foi de: %.2f", somador->soma);
        }

        ///**********************divisao*********************************************************
        else
        {
              if((file_relat = fopen("relatorio_gastos.txt", "a+")) == NULL)
                {
                    printf("Arquivo nao pode ser aberto\n");
                }
            else
                {


         ///colocar a var certa

                if (gasto->tamanho == 'g')
                {   somador->tamanho_da_pizza=20;
                    fprintf(file_relat,"Preço da pizza gigante: %.2f\n",somador->tamanho_da_pizza); /// preço da pizza
                }
                 else if (gasto->tamanho == 'm')
                {   somador->tamanho_da_pizza=10;
                   fprintf(file_relat,"Preço da pizza média: %.2f\n",somador->tamanho_da_pizza); /// preço da pizza
                }
                 else if (gasto->tamanho == 'p')
                {   somador->tamanho_da_pizza=5;
                    fprintf(file_relat,"Preço da pizza pequena: %.2f\n",somador->tamanho_da_pizza); /// preço da pizza
                }
            /// ************** preço dos ingredientes**********************************

                FILE *mostra_ingre;
                _Ingre *mostrar;
                mostrar = aloca_ingrediente();

            if (gasto->ingre1== preco->cod)
                    {

                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p1=preco->preco;
                            printf("\nPreço do ingrediente: %.2f ",somador->p1);
                        }
                    }
                    }
            /// ***********************************

             if (gasto->ingre2== preco->cod)
                    {



                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p2=preco->preco;
                            printf("\nPreço do ingrediente: %.2f ",somador->p2);
                        }
                    }


                }
                ///****************************************************

             if (gasto->ingre3== preco->cod)
                {



                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p3=preco->preco;

                            printf("\nPreço do ingrediente: %.2f ",somador->p3);
                        }
                    }
                }

          ///***********************************************************


           if (gasto->ingre4== preco->cod)
                    {



                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p4=preco->preco;

                            printf("\nPreço do ingrediente: %.2f ",somador->p4);
                        }
                    }

                }


        ///******************************************************


             if (gasto->ingre5== preco->cod)
                    {



                 if((mostra_ingre=fopen("ingrediente.txt","r"))==NULL)
                    {
                        printf("Arquivo nao pode ser aberto\n");
                    }
                else
                    {
                        while(!feof(mostra_ingre))
                        {
                            fscanf(mostra_ingre," %.2f",&preco->preco);
                            somador->p5=preco->preco;
                            printf("\nPreço do ingrediente: %.2f ",somador->p5);
                        }
                    }
                    }
                    }
            somador->soma+= somador->tamanho_da_pizza  + somador->p1 + somador->p2 + somador->p3 + somador->p4 + somador->p5 ;///mudar as var
            fprintf(file_relat,"O preço final foi de: %.2f", somador->soma);
        }




        fclose(file_relat);
        system("pause");
    }
}
_Relat*  aloca_relatorio()/// faz parte da struct v se ta certo
{
    return (_Relat*)malloc(sizeof(_Relat));
}
