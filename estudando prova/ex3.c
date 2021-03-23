#include<stdio.h>
#include<stdio.h>

int potencia(int i, int j)
{   int resultado;
    if (j==1)
    {
        return ;
    }

    else
    {
        return resultado =  i * potencia(i,j-1);
    }
}



int main()
{
    int i,j;

    printf("Diite 2 valores");
    scanf("%i%i",&i,&j);

    printf("O resultado foi de:%i",potencia(i,j));



    return 0;
}
