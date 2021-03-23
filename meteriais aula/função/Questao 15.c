#include<stdio.h>
 void retorna_maior_e_menor(int x,int y,int z,int *pma,int *pme)
{

    *pma=x;
    *pme=x;
    if(*pma<y)
    {
        *pma=y;
    }
     if(*pma<z)
    {
        *pma=z;
    }
    if(*pme>y)
    {
        *pme=y;
    }
     if(*pme>z)
    {
        *pme=z;
    }
}
int main()
{
    int a,b,c,maior,menor;
    printf("Digite tres valores:");
    scanf("%i %i %i",&a,&b,&c);
    retorna_maior_e_menor(a,b,c,&maior,&menor);
    printf("Maior: %i\n",maior);
    printf("Menor: %i\n",menor);
    return 0;
}
