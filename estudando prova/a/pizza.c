#include <stdio.h>
#include <stdlib.h>

typedef struct pizza Piz;
struct pizza
{
    char nome[30];
    char borda;
    float preco;
};


typedef struct pedido Ped;
struct pedido
{
    char nome[25];
    Piz *preco;
    Piz *borda
};

void pedido_p(Piz *al)
{
    FILE *p;

    if ((p=fopen("pizza.txt","a+b"))==Null)
    {
        printf("~~~~~~~~~~~~")~;
    }
    else
    {
        fwrite(al,sizeof(Piz)1,p);
        fclose(p);
    }
}
 Piz * buscar(char nome[25])
{
   FILE p;
   Piz *a=malloc(sizeof(Piz));

   if ((p=fopen("pizza.txt","rb"))==NULL)
   {
       printf("--------------");

   }
   else
   {
       while(fread(a,sizeof(Piz),1,p)!=0)
       {
           if (nome==a->nome)
           {
               return a;
           }
       }fclose(p);
        free(a);
        return null;
   }
}

void gravar_p(Piz *al)
{
    FILE *p;
    Piz *a=malloc(sizeof(Piz));

    if ((p=fopen("pizza.txt","r+b"))==NULL)
    {
        printf("kdfhfh");
    }
    else
    {
       while(fread(al,sizeof(Piz),1,p)!=NULL)
       {
           if(a->nome==nome)
           {
               fseek(p,sizeof(Piz)*-1,SEEK_CUR);
               fwrite(al,sizeof(Piz),1,p);
               break;
           }
       }fclose(p);
       free(a);

    }

}
int main()
{
    Piz *a;
    char d[25];
    a=(Piz*)malloc(sizeof(Piz));
    pedido_p(a);

    scanf("%s",d);
   a= buscar(d);


    free(a);
}
