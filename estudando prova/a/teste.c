#include <stdio.h>
#include <stdlib.h>

typedef struct teste t;
struct teste
{

    int i;
    int j;
   int  soma;
};
void ler_teste(t *a)
{
    printf("NUm");
    scanf("%i",&a->i):
    scanf("%i",&a->j);
    a->soma=a->i+a->j;
}

gravar_teste(t *a)
{
    FILE *p;

    if ((p=fopen("Arquivo.bin","a+b"))==NULL)
    {
        printf(".........");
    }
    else
    {
        fwrite(a,sizeof(t),1,p);
        fclose(p);
    }
}
t *busca_teste(int i)
{
    FILE *p;
    t *a=malloc(sizeof(t));

    if ((p=fopen("Arquivo.bin","rb"))==null)
    {
          printf("Arquivo nao pode ser aberto\n");
    }
    else
    {
        while(fread(a,sizeof(t),1,p)!=0)
        {
            if(a->i==i)
            {
                return a;
            }

        }
        fclose(p);
        free(a);
    }
}


int main()
{
    teste *a;

a= (teste*)malloc(sizeof(teste));

ler_teste(a);
gravar_teste(a);

free(a);
}
