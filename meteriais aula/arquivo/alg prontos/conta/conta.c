#include <stdio.h>
#include "conta.h"
#include "cliente.h"

void ler_conta( TConta * c)
{
    printf("Digite numero da conta: ");
    scanf("%i",&c->codigo);
    printf("Digite saldo da conta: ");
    scanf("%f",&c->saldo);
    ler_cliente( &c->cli );
}

void imprimir_conta( TConta * c)
{
    printf("######################\n");
    printf("Numero da conta: %i\n",c->codigo);
    printf("Saldo da conta: %.2f\n",c->saldo);
    imprimir_cliente(&c->cli);
}

void deposito( TConta *c, float valor )
{
    c->saldo+=valor;
}

void saque( TConta *c, float valor )
{
    if(c->saldo >=  valor)
    {
      c->saldo-=valor;
    }
    else
    {
        printf("Saldo insuficiente\n");
    }
}

TConta* buscar_conta( TConta *contas, int tam,int cod)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if( contas[i].codigo == cod )
        {
            return &contas[i];
        }
    }
    return NULL;
}

void gravar_conta( TConta * c )
{
    FILE *p;

    p = fopen("conta.bin", "a+b");
    if( p == NULL)
    {
        printf("Erro ao abrir arquivo");
    }
    else
    {
        fwrite(c,sizeof(TConta),1,p);
    }
    fclose(p);
}


int existe_conta()
{
    FILE *p;

    p = fopen("conta.bin", "rb");
    if( p == NULL)
    {
        return 0;
    }
    else
    {
        fclose(p);
        return 1;
    }
}


int qtd_conta()
{
    int qtd = 0, n;
    FILE *p;
    TConta c;

    p = fopen("conta.bin", "rb");
    if( p == NULL)
    {
        return 0;
    }
    else
    {
        while( !feof(p) )
        {
            n = fread(&c,sizeof(TConta),1,p);
            if(n != 0) qtd++;
        }
        fclose(p);
        return qtd;
    }
}

void ler_conta_arquivo( TConta *c, int t)
{
    int i;
    FILE *p;

    p = fopen("conta.bin", "rb");
    if( p == NULL)
    {
        printf("Erro ao abrir arquivo");
    }
    else
    {
        for(i=0;i<t;i++)
        {
            fread(&c[i],sizeof(TConta),1,p);
        }
        fclose(p);
    }
}




