#include<stdio.h>
#define tam 5
int main()
{
    int s[tam],i,j,cont=tam-1;

    for(i=0;i<tam;i++)
    {
        printf("Digite um numero:");
        scanf("%i",&s[i]);
    }
    for(i=0;i<tam;i++)
    {
        if(s[i]<=0)
        {
            for(i=0; i<=tam-1; i++)
            {
                s[i]=s[i+1];
            }
            i--;
            cont --;
        }
    }
    for(i=0;i<tam;i++)
    {
        printf("%i",s[i]);
    }
    return 0;
}
