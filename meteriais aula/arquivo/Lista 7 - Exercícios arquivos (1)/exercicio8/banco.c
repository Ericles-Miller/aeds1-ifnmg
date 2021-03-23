#include <stdio.h>
#include "banco.h"


void ler_banco( TBanco *b)
{
    printf("Digite codigo da conta: ");
    scanf("%i", &b->codigo);
    printf("Digite nome do cliente: ");
    scanf("%s", b->cliente);
    printf("Digite saldo da conta: ");
    scanf("%f", &b->saldo);
}
void imprimir_banco( TBanco *b)
{
    printf("Codigo da conta: %i\n", b->codigo);
    printf("Nome do cliente: %s\n", b->cliente);
    printf("Saldo da conta: %f\n\n", b->saldo);
}
void gravar_banco( TBanco *b)
{
    FILE *pa;

    if( (pa = fopen("banco", "a+b")) == NULL)
    {
        printf("ERROR - ARQUIVO");
        return 1;
    }
    else
    {
        fwrite(b,sizeof(TBanco),1,pa);
        fclose(pa);
    }
}
TBanco* buscar_banco( int codigo)
{
    FILE *pa;
    TBanco *b = malloc(sizeof(TBanco));

    if( (pa = fopen("banco", "rb")) == NULL)
    {
        printf("ERROR - ARQUIVO");
        return 1;
    }
    else
    {
         while(!feof(pa))
        {
            if( fread(b,sizeof(TBanco),1,pa) == 1)
            {
                if(b->codigo == codigo)
                {
                    fclose(pa);
                    return b;
                }
            }
        }
        free(b);
        fclose(pa);
        return NULL;
    }
}

void atualizar_conta_banco( TBanco *b)
{
    FILE *pa;
    TBanco aux;

    if( (pa = fopen("banco", "r+b")) == NULL)
    {
        printf("ERROR - ARQUIVO");
        return 1;
    }
    else
    {
         while(!feof(pa))
        {
            if( fread(&aux,sizeof(TBanco),1,pa) == 1)
            {
                if(aux.codigo == b->codigo)
                {
                    imprimir_banco(&aux);
                    fseek(pa,-sizeof(TBanco), SEEK_CUR);
                    fwrite(b,sizeof(TBanco),1,pa);
                    fclose(pa);
                    break;
                }
            }
        }
        fclose(pa);
    }
}


void listar_banco()
{
    FILE *pa;
    TBanco b;

    if( (pa = fopen("banco", "rb")) == NULL)
    {
        printf("ERROR - ARQUIVO");
        return 1;
    }
    else
    {
        while(!feof(pa))
        {
            if( fread(&b,sizeof(TBanco),1,pa) == 1)
            {
               imprimir_banco(&b);
            }
        }
    }
}
