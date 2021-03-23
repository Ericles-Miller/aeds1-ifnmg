#include<stdio.h>
#include<stdlib.h>

int main()
{
int n1,n2,resultado;

printf("Diite dois numeros:");
scanf("%i%i",&n1,&n2);

resultado= potencia(n1,n2);

printf("Resultado:%i",resultado);
return 0;
}
int potencia(int n, int m)
{

    if (m==1)
    {
        return n;
    }
    else if (m==0)
    {
        return 1;
    }
    else if (m<0)
    {   m=-m;
        return 1/(n * potencia(n,m-1));
    }
    else
    {
        return n* potencia(n,m-1);
    }



}
